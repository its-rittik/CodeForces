#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int x;
        cin >> x;
        int array[3];

        for (int i = 0; i < 3; i++)
            scanf("%d", &array[i]);
        int y, z;
        y = array[x - 1];
        z = array[y - 1];
        // cout << "X: " << x <<"Y:"<<y<<"\n"<<"Z:" << z;
        int max, min;
        int mid;
        if (x > y)
        {
            if (z > x)
            {
                max = z;
                mid = x;
                min = y;
            }
            else
            {
                if (y > z)
                {
                    max = x;
                    mid = y;
                    min = z;
                }
                else
                {
                    max = x;
                    mid = z;
                    min = y;
                }
            }
        }
        else
        {
            if (z > y)
            {
                max = z;
                mid = y;
                min = x;
            }
            else
            {
                if (z > x)
                {
                    max = y;
                    mid = z;
                    min = x;
                }
                else
                {
                    max = y;
                    mid = x;
                    min = z;
                }
            }
        }
        if (max == 3 && mid == 2 && min == 1)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}
