#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int d, b, c;
    c = a[3] - a[0];
    b = a[3] - a[2];
    d = a[3] - b - c;
    cout << b << " " << d << " " << c << endl;
}