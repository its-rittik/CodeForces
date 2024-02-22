#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    for (;;)
    {
        a = 3 * a ;
        b = 2 * b ;
        // cout << "a:" << a << " "
        //      << "b:" << b << endl;
        sum++;
        if (a > b)
            break;
    }
    cout << sum << endl;
}