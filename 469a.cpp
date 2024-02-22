#include <iostream>
using namespace std;
int main()
{
    int n, p, q, sum = 0, sum2 = 0;
    cin >> n;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }

    int c[p + q];
    for (int i = 0; i < p; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < q; i++)
    {
        c[p + i] = b[i];
    }

    for (int i = 0; i < p + q; i++)
    {
        for (int j = i + 1; j < p + q; j++)
        {
            if (c[j] > c[i])
            {
                sum = c[j];
                c[j] = c[i];
                c[i] = sum;
            }
        }
    }
    int d[n];

    for (int j = 0; j < n; j++)
    {
        d[j] = j + 1;
    }
    for (int j = 0; j < n; j++)
        for (int i = 0; i < p + q; i++)
        {
            if (d[j] == c[i])
            {
                sum2++;
                break;
            }
        }
    if (sum2 == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}