#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     long long int n, sum = 0;
    cin >> n;
    if (n % 2 == 0)
        sum = n / 2;
    else
        sum = ((n + 1) / 2) * (-1);
    cout << sum << endl;
}
