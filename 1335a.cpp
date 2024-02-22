#include <iostream>
using namespace std;
int main()
{
    int test;
    double temp = 0;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 - 1 << endl;
        else
        {
            temp = n / 2;
            n = temp;
            cout << n << endl;
        }
        temp = 0;
    }
    return 0;
}