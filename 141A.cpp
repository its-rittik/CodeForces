#include <iostream>
#include <algorithm>
#include <string>
int main()
{
    string s, s1, s2, s3;
    std::cin >> s >> s1 >> s3;
    s2 = s + s1;
    sort(s2.begin(), s2.end());
}