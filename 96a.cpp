#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    char temp;

    for (int i = 0; i < s.size(); i++)
    {
        temp = s[i];
        for (int j = i; j < i + 7; j++)
        {
            if (temp == s[j])
                sum++;
            // cout << "Temp" << temp << " sum:" << sum << endl;
        }
        if (sum >= 7)
            sum = sum;
        else
            sum = 0;
    }
    if (sum >= 7 && s.size() >= 7)
    {
        cout << "YES" << endl;
    }
    else if (sum < 7 || s.size() < 7)
    {
        cout << "NO" << endl;
    }
    return 0;
}