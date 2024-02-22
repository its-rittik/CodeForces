#include <iostream>
using namespace std;
int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    k = (240 - k);
    for (int i = 1; i <= n; i++)
    {
        k -= (i * 5);
        if (k >= 0)
            sum++;
    }
    cout << sum << endl;
}