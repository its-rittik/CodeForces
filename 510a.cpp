#include <iostream>
using namespace std;
int main()
{
    int n, m, temp = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1)
                cout << '#';
            if (i % 2 == 0 && temp == 0)
            {
                if (j == m)
                    cout << "#";
                else
                    cout << ".";
                if (j == m)
                    temp = 2;
            }
            if (i % 2 == 0 && temp == 1)
            {
                if (j == 1)
                    cout << "#";
                else
                    cout << ".";
                if (j == m)
                    temp = 3;
            }
            if (temp == 2)
                temp = 1;
            if (temp == 3)
                temp = 0;
        }
        cout << endl;
    }
    return 0;
}