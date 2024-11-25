#include <stdio.h>
    
    int main ()
{
    int age ;
    printf ("enter your age\n");
    scanf ("%d",&age);
    printf ("you have entered %d as your age\n",age);
    if (age>=18)
    {
        printf ("you can vote\n");
    }
    else if (age<=5)
    {
        printf ("you can vote for babies\n");
    }
    else if (age<=10)
    {
        printf ("you can vote for kids\n");
    }
    else if (age<=17)
    {
        printf (" your age is between 12 to 18 you can vote for teenager\n");
    }
    else
    {
        printf ("you can not vote\n");
    }
}