#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        sum += a;
    }
    if (sum >= 1)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}