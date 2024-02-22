#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    int array[test];
    for (int i = 0; i < test; i++)
    {
        cin >> array[i];
    }

    int sum = 1, sum2 = array[0];
    for (int i = 0; i < test; i++)
    {
        if (array[i] != sum2)
        {
            sum++;
            sum2 = array[i];
        }
    }
    cout << sum << endl;

    return 0;
}
