#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char match[200];
    fgets(match, sizeof(match), stdin);
    int l, sum = 0, sum2 = 0;
    l = strlen(match) - 1;
    for (int i = 0; i < l; i++)
    {
        if (match[i] == 'A')
            sum += 1;
        else if (match[i] == 'D')
            sum2 += 1;
    }
    if (sum2 > sum)
        printf("Anton\n");
    else if (sum2 < sum)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}