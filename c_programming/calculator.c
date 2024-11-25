#include <stdio.h>

int main ()
{
    int a,b,maths ;
    printf("enter the no. 1:");
    scanf ("%d",&a);
    printf ("enter the no. 2:\n");
    scanf ("%d",&b);
    
    printf ("you entered the 1st no. %d and 2nd no. %d\n",a,b);
    printf ("choose case 1 for sum , 2nd for substraction , 3rd for multiplication, 4th for division  \n");
    scanf ("%d",&maths);
    printf ("you choose the case : %d",maths);
    
    switch (maths)
    {
    case 1: 
        printf ("the sum of a and b is %d \n",a+b);
        break;
    case 2:
        printf ("the subtraction of a and b is %d\n",a-b);
        break;
    case 3:
         printf ("the multiplcation f a and b is %d \n",a*b);
        break;    
    case 4:
         printf ("the division of a and b is %d\n",a/b);    
    default:
        printf ("STATEMENT INVALID\n ");
        break;
    }
    }
