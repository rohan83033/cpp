#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("the value of %d element of the array is %d\n", i, marks[i]);
    }
}