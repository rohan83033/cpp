#include <stdio.h>
void starpattern(int rows)
      {
        for (int i= 0 ; i < rows; i++)
        {
            for (int j= 0 ;j <= i; j++)
            {
            printf ("*");
            }
            printf ("\n");
        }
    }

void reversepattern(int rows)
      {
        for (int i= 0 ; i < rows; i++)
        {
            for (int j=0 ;j <= rows-i-1; j++)
            {
            printf ("*");
            }
            printf ("\n");
        }
    }
    
 int main ()
 {
     int rows,type;
     printf ("enter the type of patter you want 0 for starpatter 1 for reverse star pattern.\n ");
     scanf ("%d",&type) ;
     printf ("you have entered the %d\n",type);
     printf ("enter the rows you want\n");
     scanf ("%d",&rows);
     printf ("you have entered the %d rows\n",rows);
     switch (type)
     {
     case 0:    
         starpattern(rows);
         break;
     case 1:
         reversepattern(rows);
     default:
        printf ("INVALID SATATEMENT\n");
         break;
     }
     return 0;
 }