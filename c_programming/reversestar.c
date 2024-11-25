#include <stdio.h>
void reversepattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n\n");
    }
}

int main()
{
    int rows;
 
    printf("enter the rows to print star in reverse pattern\n ");
    scanf("%d", &rows);

    printf("you have entered the %d rows \n", rows);
 
    reversepattern(rows);
 
    return 0;
}