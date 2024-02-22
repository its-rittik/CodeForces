// codeforces.com/problemset/problem/69/A
#include <stdio.h>
#include <math.h>
int main()
{
    int t, fx, fy, fz, sum_fx = 0, sum_fy = 0, sum_fz = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d%d%d", &fx, &fy, &fz);
        sum_fx += fx;
        sum_fy += fy;
        sum_fz += fz;
    }
    if (sqrt(sum_fx * sum_fx + sum_fy * sum_fy + sum_fz * sum_fz) == 0)
        printf("YES\n");
    else
        printf("NO\n");
}