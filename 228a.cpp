#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long a[4],
        sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int max;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] > a[j])
            {
                max = a[j];
                a[j] = a[i];
                a[i] = max;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}