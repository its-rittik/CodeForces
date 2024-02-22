// https://codeforces.com/problemset/problem/520/A
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char alp[n];
    // gets(alp);
    scanf("%s", alp);
    //// fgets(alp, sizeof(alp), stdin);
    int l, sum = 0, sum2 = 0;
    char temp;
    l = strlen(alp) - 1;
    for (int i = 0; i <= 32; i++)
    {
        for (int j = 0; j < l; j++)
        {
            alp[j] = temp;
            if (temp == 97 + i)
                sum += 1;
            else if (temp == 65 + i)
                sum2 += 1;
        }
    }
    puts(alp);
    printf("%d%d", sum, sum2); 
    if (sum >= 26 || sum2 >= 26)
        printf("YES\n");
    else
        printf("N0\n");
    return 0;
}