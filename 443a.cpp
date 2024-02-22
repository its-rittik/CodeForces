#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string s;
    getline(cin, s);

    s.erase(s.begin());
    s.pop_back();
    sort(s.begin(), s.end());
    int l = s.size();
    int sum = 1;
    char temp = s[l - 1];
    for (int i = l; i > 0; i--)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            if (temp == s[i])
            {
                sum = sum;
            }
            else
            {
                sum++;
                temp = s[i];
            }
        }
    }
    if (l == 0)
        sum = 0;
    cout << sum << endl;
    return 0;
}