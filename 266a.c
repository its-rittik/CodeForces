#include <stdio.h>
int main()
{
    int test, sum = 0;
    scanf("%d", &test);
    char array[test];
    scanf("%s", array);
    for (int i = 0; i < test; i++)
    {
        if (array[i] == array[i + 1])
            sum++;
    }
    printf("%d\n", sum);
}