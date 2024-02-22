// https://codeforces.com/problemset/problem/59/A
#include <stdio.h>
#include <string.h>
int main()
{
    char str[120];
    fgets(str, sizeof(str), stdin);
    int l, sum = 0, sum2 = 0;
    l = strlen(str) - 1;
    if (l >= 1 && l <= 100)
    {
        for (int i = 0; i < l; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                sum += 1;
            else if (str[i] >= 'A' && str[i] <= 'Z')
                sum2 += 1;
        }
        if (sum >= sum2)
        {
            for (int i = 0; i < l; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    printf("%c", str[i]);
                else if (str[i] >= 'A' && str[i] <= 'Z')
                    printf("%c", str[i] + 32);
            }
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    printf("%c", str[i]);
                else if (str[i] >= 'a' && str[i] <= 'z')
                    printf("%c", str[i] - 32);
            }
        }
        printf("\n");
    }
    return 0;
}