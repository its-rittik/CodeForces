// https://codeforces.com/problemset/problem/282/A
#include <stdio.h>
int main()
{
    char x;
    int test, sum = 0;
    scanf("%d", &test);
    char array[3]
    while (test--)
    {
        scanf("%c", &x);
        switch (x)
        {
        case '++x':
            printf("%d", sum + 1);
            break;
        case 'x++':
            printf("%d", sum );
            break;
        case '--x':
            printf("%d", sum - 1);
            break;
        case 'x--':
            printf("%d", sum );
            break;
        }
    }