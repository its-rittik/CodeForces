#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s, s2;
    cin >> s >> s2;
    int l = s2.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        else
            s[i] = s[i];

        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
        else
            s2[i] = s2[i];
    }

    if (s == s2)
        cout << 0 << "\n";
    else
    {
        if (s < s2)
            cout << -1 << "\n";
        if (s > s2)
            cout << 1 << "\n";
    }
    return 0;
}