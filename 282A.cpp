#include <iostream>
using namespace std;
int main()
{
    int x = 0, test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        if (s[0] != 'X')
        {
            if (s[0] == '+')
                ++x;
            else
                --x;
        }
        else
        {
            if (s[2] == '+')
                x++;
            else
                x--;
        }
    }
    cout << x << "\n";
    return 0;
}