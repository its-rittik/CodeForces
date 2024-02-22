#include <stdio.h>
#include <string.h>
int main()
{
    char str[101], temp;
    char str2[101];
    scanf("%s%s", str, str2);
    int l, value;
    l = strlen(str);
    // printf("%d\n" , l);
    // strrev(str);
    if ((l >= 1 && l <= 100))
    {
        for (int i = 0; i <= ((l - 1) / 2); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                temp = str[i];
                str[i] = str[l - 1 - i];
                str[l - 1 - i] = temp;
            }
        }
        // printf("%s", str);
        value = strcmp(str, str2);
        if (value == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
