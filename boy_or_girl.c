#include <stdio.h>
#include <string.h>
int main()
{
    int l, sum = 0;
    char name[101];
    scanf("%s", name);
    l = strlen(name);
    for (int i = 1; i < l; i++)
    {
        if (name[i] != name[i - 1])
            sum++;
    }
    if (sum & 1)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}