#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("enter the rows to print star pattern\n ");
    scanf("%d", &rows);
    printf("you have entered the %d rows \n", rows);
    starpattern(rows);
    return 0;
}