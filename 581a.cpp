#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0, sum2 = 0;
    cin >> a >> b;
    if (a > b)
    {
        sum = b;
        sum2 = (a - b) / 2;
    }
    else
    {
        sum = a;
        sum2 = (b - a) / 2;
    }
    cout << sum << " " << sum2;
    return 0;
}