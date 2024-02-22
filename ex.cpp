#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //  a.push_back(temp);
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}