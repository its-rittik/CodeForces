#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, sum = 0, sum2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            sum++;
        else
            sum2++;
    }
    if (sum > sum2)
        cout << "Anton" << endl;
    else if (sum < sum2)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}