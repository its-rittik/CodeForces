#include <iostream>
using namespace std;

int main()
{
    int h, e, l1 = 0, l2, o;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h')
            h = i;
        if (s[i] == 'e')
            e = i;
        if (s[i] == '0')
            o = i;
        if (s[i] == 'l' && s[i - 1] == 'l')
            l1 = i;
    }
    l2 = l1 + 1;
    if (h < e && e < l1 && l2 < o)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
