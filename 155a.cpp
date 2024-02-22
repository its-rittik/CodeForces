#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, sum = 1;
    cin >> n;
    int score[n], max, mini;
    for (int i = 0; i < n; i++)
        cin >> score[i];
    max = score[1];
    mini = score[1];
    for (int i = 1; i < n; i++)
    {

        mini = min(mini, score[i]);
    }

    for (int i = 2; i < n; i++)
    {
        if (max < score[i])
        {
            sum++;
            max = score[i];
        }
    }
    if (score[1] != mini)
        sum++;
    if (sum >= 1 && n > 1)
        cout << sum << endl;
    else
        cout << 0 << endl;
    return 0;
}