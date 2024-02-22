#include <iostream>
using namespace std;
int main()
{
    int j = 3, n = 4, sum = 0;
    int year, reminder[4], new_number;

    cin >> year;
    year += 1;
    while (1)
    {
        reminder[0] = year % 10;
        new_number = year / 10;
        reminder[1] = new_number % 10;
        new_number /= 10;
        reminder[2] = new_number % 10;
        new_number /= 10;
        reminder[3] = new_number % 10;
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (reminder[i] == reminder[j])
                {
                    year++;
                    sum = 1;
                    break;
                }
            }
            if (sum==1)
                break;
        }
        if (sum==0)
            break;
    }
    cout << year;
    return 0;
}
