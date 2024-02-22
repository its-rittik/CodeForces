#include <iostream>
using namespace std;
int main()
{
    int room, sum = 0;
    cin >> room;
    while (room--)
    {
        int p, q;
        cin >> p >> q;
        if ((q - p) >= 2)
            sum++;
    }
    cout << sum << endl;
    return 0;
}