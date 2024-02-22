#include <stdio.h>
int main()
{
    int year, array[3], last_digit, sum = 0;
    scanf("%d", &year);
    for (int i = 0; i < 4; i++)
    {
        last_digit = year % 10;
        last_digit = array[i];
        if (last_digit >= 1 && last_digit <= 9)
            break;
        else
            year = year / 10;
    }
    for (int i = 0; i < 4; i++)
        printf("%d", array[i]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (array[i] == array[j])
                array[j] = array[j] + 1;
        }
    }
}