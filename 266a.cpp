#include <iostream>
#include <string>
using namespace std;
int main()
{
    int test, sum = 0;
    cin >> test;
    string s;
    for (int i = 0; i < test; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < test; i++)
    {
        if (s[i] == s[i + 1])
            sum++;
    }
    cout << sum << endl;
    return 0;
}
