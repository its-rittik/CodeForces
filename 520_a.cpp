#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 1;
    cin >> n;
    string array;
    cin >> array;
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 'A' && array[i] <= 'Z')
            array[i] += 32;
    }
    sort(array.begin(), array.end());
    char temp = array[0];

    for (int i = 0; i < n; i++)
    {
        if (temp < array[i])
        {
            sum++;
            temp = array[i];
            //  cout << "TEMP: " << temp << "sum: " << sum << endl;
        }
    }

   // cout << sum;
    if (sum == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}