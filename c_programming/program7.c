#include <stdio.h>
int sum(int a , int b);
int main ()
{
    int a=100,b=12,c ;
    c = sum(a,b);
    printf ("the sum of a and b is %d",c);
   
    return 0 ;
}
 int sum(int a , int b)
{
    return a + b ;
}