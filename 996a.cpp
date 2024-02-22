#include <iostream>
using namespace std;
int main()
{
    int array[5] = {1, 5, 10, 20, 100};
    int n, sum = 0, temp, temp2, temp3;
    float temp4 = 0;
    cin >> n;
    for (int i = 0; i < 5; i++)
        if (n >= array[i])
        {
            temp = array[i];
            temp2 = i - 1;
        }
    sum = n / temp;
    n -= sum * temp;
    for (int i = 4; i >= 0; i--)
    {
        if (n >= array[i])
        {
            temp4 = (float)n / (float)array[i];
            temp3 = temp4;
            if (temp3 >= 1)
            {
                sum += temp3;
                n -= temp3 * array[i];
            }
            else
            {
                sum++;
                n -= array[i];
            }
        }
        if (n < 5 && n > 0)
        {
            sum += n;
            break;
        }
      //  cout << "N:" << n << "sum" << sum << endl;
    }

    cout << sum << endl;
    return 0;
}