#include <stdio.h>
int main()
{
    int n, sum = 0, sum2 = 0;
    scanf("%d", &n);
    while (n--)
    {
        int p, v, a;
        scanf("%d%d%d", &p, &v, &a);
        if ((p + v + a) >= 2)
            sum2++;
    }
    printf("%d\n", sum2);
    return 0;
}