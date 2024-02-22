#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "I hate it";
    char b[] = "I hate that";
    char c[] = "I love it";
    char d[] = "I love that";
    int n;
    scanf("%d", &n);
    // printf("%s ", a);
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            printf("%s ", b);
        if (i % 2 == 0)
            printf("%s ", d);
    }
    if (n % 2 == 0)
        printf("%s ", c);

    if (n % 2 != 0)
        printf("%s ", a);
    printf("\n");
}