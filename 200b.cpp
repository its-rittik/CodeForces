#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    float array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    n *= 100;
    sum = sum / (float)n * 100;
    cout << fixed << setprecision(12) << sum;
    return 0;
}