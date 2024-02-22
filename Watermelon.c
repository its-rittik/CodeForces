#include <stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    while (1 <= w && w <= 100)
    {
        if (w % 2 == 0 && w > 2)
        {
            printf("YES");
            break;
        }
        else
        {
            printf("NO");
            break;
        }
    }
}