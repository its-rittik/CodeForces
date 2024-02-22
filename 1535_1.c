#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int array[3], array_new[3], i, j, temp = 0;
        for (i = 0; i < 4; i++)
        {
            scanf("%d", &array[i]);
            array_new[i] = array[i];
        }
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        if ((array[0] == array_new[0] || array[0] == array_new[1]) && (array[1] == array_new[2] || array[1] == array_new[3]))
            printf("YES\n");
        else if ((array[1] == array_new[0] || array[1] == array_new[1]) && (array[0] == array_new[2] || array[0] == array_new[3]))
            printf("YES\n");
        else
            printf("NO\n");
    }
}