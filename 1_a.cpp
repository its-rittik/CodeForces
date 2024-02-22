#include <iostream>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long double x, y;
    if (m % a == 0)
        x = m / a;
    else
        x = m / a + 1;
    if (n % a == 0)
        y = n / a;
    else
        y = n / a + 1;
    long long int sum = 0;
    sum = x * y;
    cout << sum << "\n";
    return 0;
}