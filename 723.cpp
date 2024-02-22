#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int sum = a[1] - a[0] + a[2] - a[1];
    cout << sum << endl;
    return 0;
}