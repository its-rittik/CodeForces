#include <stdio.h>
int main()
{
    int m, n, largest;
    int largrowloc, largcolumnloc;

    scanf("%d %d", &m, &n);

    int arr[m][n], i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }

    largest = arr[0][0];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (largest < arr[i][j])
            {
                largest = arr[i][j];
                largrowloc = i;    // row location of largest element
                largcolumnloc = j; // column location of largest element
            }
        }
    }

    printf("\n");
    printf("Largest element in array is %d in location arr[%d][%d]\n",
           largest, largrowloc, largcolumnloc);

    return 0;
}