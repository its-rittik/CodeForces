#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, sum2 = 0;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        sum += i;
        if (sum < 0)
        {
            sum2++;
            sum = 0;
        }
    }
    cout << sum2 << endl;
    return 0;
}
