#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int sum = 0;
    string s, s1, s2, s3;
    cin >> s >> s1 >> s3;
    s2 = s + s1;
    int l = s2.size();
    int l2 = s3.size();
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());
    for (int i = 0; i < l; i++)
    {
        if (s2[i] == s3[i])
        {
            sum++;
        }
    }
    if (sum == l && l == l2)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}
