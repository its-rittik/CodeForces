#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int array[5][5];
    int i, j, sum = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> array[i][j];

            if (array[i][j] == 1)
                sum = (abs(i - 2) + abs(j - 2));
        }
    }

    cout << sum << endl;
    return 0;
}