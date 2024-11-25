#include <stdio.h>
  int main()
  {
      int i,j, matrix[4][4];
   for (i=1;i<=4;i++)
        {
        for (j=1;j<=4;j++)
        {
            printf ("enter the value 1-16 \n");
            scanf("%d",&matrix[i][j]);
        }
        }
    printf("\n\n");
    for (i=1;i<=4;i++)
    {
        for (j=1;j<=4;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf ("\n");
    
    }
  }