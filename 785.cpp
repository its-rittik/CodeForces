#include <iostream>
using namespace std;
int main()
{
    int test, sum = 0;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        if (s[0] == 'T')
            sum += 4;
        if (s[0] == 'C')
            sum += 6;
        if (s[0] == 'O')
            sum += 8;
        if (s[0] == 'I')
            sum += 20;
        if (s[0] == 'D')
            sum += 12;
    }
    cout << sum << "\n";
    return 0;
}