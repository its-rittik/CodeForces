#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int n, sum = 0, sum2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (auto &c : s)
    {
        c = static_cast<char>(tolower(c));
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            sum++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            sum2++;
    }

    if (sum >= 26 || sum2 >= 26)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}