#include <stdio.h>
int main()
{

    int array[5][5];
    int i, j, sum = 0, large, largerow, largecoloum;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &array[i][j]);
            large = array[0][0];
            if (large < array[i][j])
            {
                large = array[i][j];
                largerow = i;
                largecoloum = j;
            }
        }
    }

    switch (largerow)
    {
    case 0:
        sum += 2;
        break;
    case 1:
        sum += 1;
        break;
    case 2:
        sum = sum;
        break;
    case 3:
        sum += 1;
        break;
    case 4:
        sum += 2;
        break;
    }
    switch (largecoloum)
    {
    case 0:
        sum += 2;
        break;
    case 1:
        sum += 1;
        break;
    case 2:
        sum = sum;
        break;
    case 3:
        sum += 1;
        break;
    case 4:
        sum += 2;
        break;
    }
    printf("%d\n", sum);
    return 0;
}