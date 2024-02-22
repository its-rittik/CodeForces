#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        char str[100];
        fgets(str, sizeof(str), stdin);
        int l;
        l = strlen(str) - 1;
        if (l > 10)
            printf("%c%d%c\n", str[0], l - 2, str[l - 1]);
        else
        {
            for (int i = 0; i < l; i++)
                printf("%c", str[i]);
            printf("\n");
        }
    }

    return 0;
}
