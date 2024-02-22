#include <iostream>
using namespace std;
int main()
{
    int test, sum = 0, max = 0;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        sum += b - a;
        if (max < sum)
            max = sum;
    }
    cout << max << endl;
    return 0;
}