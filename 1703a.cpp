#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        // cout << s << endl;
        if (s[0] == 'y' && s[1] == 'e' && s[2] == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}