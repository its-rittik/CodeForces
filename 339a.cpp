#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string sum;
    cin >> sum;
    int l = sum.size();
    for (int i = 0; i < l; i++)
    {
        if (sum[i] == '+')
            sum.erase(sum.begin() + i);
    }
    sort(sum.begin(), sum.end());
    int l2 = sum.size();
    for (int i = 0; i < l2; i++)
    {
        if (i + 1 != l2)
            cout << sum[i] << "+";
        else
            cout << sum[i];
    }
    return 0;
}