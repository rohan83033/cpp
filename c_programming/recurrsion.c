#include <stdio.h>
 int factorial (int number)
 {
     if (number == 1 || number == 0)
      {
         return 1 ;
      }
     else 
      {
      // no.* 
       return (number * factorial(number-1));
      }  
 }
            int main()
            {
            int a;
            printf ("enter the value you want factorial\n");
            scanf ("%d",&a);
            printf ("you have entered the value %d and the factorial is %d\n",a,factorial(a));
            return 0 ;
            }