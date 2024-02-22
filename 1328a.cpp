// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned long int n;
//     cin >> n;
//     while (n--)
//     {
//         int a, b, sum = 0;
//         cin >> a >> b;
//         while (a % b != 0)
//         {
//             a++;
//             sum++;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    unsigned long int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << (a + b - 1) / b * b - a << endl;
    }
    return 0;
}
