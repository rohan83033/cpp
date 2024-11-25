#include <stdio.h>

int main()
{
    int marks[5], i, sum, percentage;
    printf("enter the marks of student in all subject\n");

    for (i = 1; i <= 5; i++)
    {
        printf("the marks in %d subject is\n", i);
        scanf("%d", &marks[i]);
    }
    for (i = 1; i <= 5; i++)
    {
        printf("The marks in %d subject is %d out of 50\n", i, marks[i]);
    }
    sum = marks[1] + marks[2] + marks[3] + marks[4] + marks[5];
    printf("the sum of all the subjects marks is %d\n", sum);

    int correct;
    printf("press 1 if all entry are correct \n");
     printf("press 2 for exit \n");
    scanf("%d",&correct);
    switch (correct)
    {
    case 1:
        printf ("inputs are correct\n");
        break;
    
    default:
         printf ("input wrong");
         goto end;
        break;
    }

    percentage = sum * 100 / 250;
    printf("percantage is %d \n", percentage);

     if (percentage >= 90)
    {
        printf("you passed from 1st division\n");
    }
     else if (percentage >= 70)
    {
        printf("you passed from 2nd division\n");
    }
    else if (percentage >=33)
    {
        printf("you passed from 3rd division\n");
    }
    else
    {
        printf("you are failed in exam\n");
    }
   end:
   return 0;
}
switch (expression)
{
case /* constant-expression */:
    /* code */
    