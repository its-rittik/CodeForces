#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum = 0, temp2 = 0, temp = 0;
        cin >> a >> b;
        int s[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        if (a > b)
        {
            temp2 = a;
            b = a;
            temp2 = b;
        }
        for (;;)
        {
            for (int i = 0; i < 10; i++)
            {
                if (a - b <= 10 && a + s[i] == b)
                {
                    a = a - s[i];
                    sum++;
                    break;
                }
                else if (a - b > 10)
                {
                    sum++;
                    a = a - 10;
                    break;
                }
                else if (a == b)
                {
                    temp = 1;
                    break;
                }
            }
        }
        if (temp == 1)
            cout << sum;
        sum = 0;
        temp = 0;
    }
}