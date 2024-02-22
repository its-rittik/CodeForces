#include <iostream>
using namespace std;
int main()
{
    int n, h, sum = 0;
    cin >> n >> h;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > h)
            sum += 2;
        else
            sum++;
    }
    cout << sum << endl;
    return 0;
}