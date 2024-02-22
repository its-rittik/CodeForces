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
        }
    }
    large = array[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (large < array[i][j])
            {
                large = array[i][j];
                largerow = i ;
                largecoloum = j;
            }
        }
    }
    array[2][2] = array[largerow][largecoloum];
    array[largerow][largecoloum] = 0; 
    if (2 > largerow)
    {
        sum = (2 - largerow);
        if (2 > largecoloum)
        {
            sum = sum + (2 - largecoloum);
        }
        else if (largecoloum > 2)
        {
            sum = sum + (largecoloum - 2);
        }
        else if (largecoloum == 2)
        {
            sum = sum + 0;
        }
    }
    else if (largerow > 2)
    {

        sum = sum + (largerow - 2);
        if (2 > largecoloum)
        {
            sum = sum + (2 - largecoloum);
        }
        else if (largecoloum > 2)
        {
            sum = sum + (largecoloum - 2);
        }
        else if (largecoloum == 2)
        {
            sum = sum + 0;
        }
    }
    else if (largerow == 2)
    {
        sum = sum + 0;
        if (2 > largecoloum)
        {
            sum = sum + (2 - largecoloum);
        }
        else if (largecoloum > 2)
        {
            sum = sum + (largecoloum - 2);
        }
        else if (largecoloum == 2)
        {
            sum = sum + 0;
        }
    }
    printf("%d\n", sum);
    return 0;
}