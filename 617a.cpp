#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0, temp2 = 0;
    float temp = 0;
    cin >> x;
    for (;;)
    {
        if (x >= 5)
        {
            temp = (float)x / 5;
            temp2 = temp;

            x -= 5 * temp2;
            sum += temp2;
        }
        else if (x == 4)
        {
            x -= 4;
            sum++;
        }
        else if (x == 3)
        {
            x -= 3;
            sum++;
        }
        else if (x == 2)
        {
            x -= 2;
            sum++;
        }
        else if (x == 1)
        {
            x -= 1;
            sum++;
        }
        if (x == 0)
            break;
    }

    cout << sum;
    return 0;
}
