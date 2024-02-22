#include <iostream>
using namespace std;
int main()
{
    int n, last_n = 0, temp = 0, temp2 = 0, temp3 = 0;
    cin >> n;
    while (n != 0)
    {
        last_n = n % 10;
        if (last_n == 4 || last_n == 7)

            temp++;

        else if (last_n != 4 || last_n != 7)
        {

            if (n % 4 == 0 || n % 7 == 0)
            {
                temp = 0;
                temp2 = 0;
                temp3 = 1;
                break;
            }
            else
            {
                temp = 0;
                temp2 = 0;
                temp3 = 0;
                break;
            }
        }

        n = n / 10;
        temp2++;
    }
    if (temp == temp2 && temp != 0)
        cout << "YES"
             << "\n";
    else if (temp3 == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}
