#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> data;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            data.push_back(temp);
        }
        sort(data.begin(), data.end());
        for (int i = 0; i < n - 1; i++)
        {
          //2  cout << "i: " << data[i] << " i+1: " << data[i + 1] << endl;
            if (abs(data[i] - data[i + 1]) == 1 && data[i] < data[i + 1])
            {
                data.erase(data.begin() + i);
                i = 0;
                n--;
            }

            else if (data[i] == data[i + 1])
            {
                data.erase(data.begin() + i);
                i--;
                n--;
            }
        }

        if (data.size() == 1)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
