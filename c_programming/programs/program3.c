#include<stdio.h>
 int main ()
 {
     int a;
     printf ("enter the subjects you passed\n");
     scanf ("%d",&a);
     printf ("you passed in %d subjects\n",a);
     if (a==2)
     {
         printf ("you are passed in maths and science and received a 45 rs gift");
     }
     else if (a==1)
     {
         printf ("you have passed in maths or science2 and received a 15rs gift");
     }
     else if (a==0)
     {
         printf ("you failed in exam");
     }
     else 
     {
         printf ("invalid statment please re enter a correct statment");
     }
 }
