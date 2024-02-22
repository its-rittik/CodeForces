#include <iostream>
using namespace std;
int mian()
{
    int n, p, q, sum = 0, sum2 = 0;
    cin >> n;
    cin >> p >> q;
    int a[p + q];
    for (int i = 0; i < p + q; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < p + q; i++)
    {
        for (int j = i + 1; j < p + q; j++)
        {
            if (a[j] > a[i])
            {
                sum = a[j];
                a[j] = a[i];
                a[i] = sum;
            }
        }
    }
    for (int i = 0; i < p + q; i++)
        cout << a[i];
}
