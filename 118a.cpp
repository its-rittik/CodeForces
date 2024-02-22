#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'y' || s[i] == 'u' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'a')
        {
            s.erase(s.begin() + i);
            i--;
        }
    }
    int l2 = s.size();
    for (int i = 0; i < l2; i++)
    {
        cout << '.' << s[i];
    }
}