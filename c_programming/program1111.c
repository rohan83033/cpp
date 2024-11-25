#include <stdio.h>
int main() 
{
    int hindi;
    printf("Enter the Number you get in subject hindi out of 100 = ");
    scanf("%d",&hindi);

    int english;
    printf("Enter the Number you get in subject english out of 100 = ");
    scanf("%d",&english);

    int maths;
    printf("Enter the Number you get in subject maths out of 100 = ");
    scanf("%d",&maths);

    int science;
    printf("Enter the Number you get in subject science out of 100 = ");
    scanf("%d",&science);

    int sst;
    printf("Enter the Number you get in subject sst out of 100 = ");
    scanf("%d",&sst);

    printf("you entered %d in hindi subject\n\n",hindi);
    printf("you entered %d in hindi subject\n\n",english);
    printf("you entered %d in hindi subject\n\n",maths);
    printf("you entered %d in hindi subject\n\n",science);
    printf("you entered %d in hindi subject\n\n",sst);
      
    /* user input if marks are corrct or not */

    int correct;
    printf("press 1 if ok\n");
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
    // creating one more int for sum of all the number student get //
    int sum=hindi+english+maths+science+sst;
    printf("you get total = %d out of 500\n",sum);
    // finding percent age with the help of sum int //
    float percent;
    percent = (sum / 500.0) * 100;
    printf("you get total %.2f percent in your Exam\n",percent);

    /* Find grade according to the percentage */

    if (percent >= 90)
    {
        printf("Congratulations you get Grade A and You won the First prize");
    }

    else if (percent >= 80)
    {
        printf("Congratulations you get Grade B and you won the Second Prize");
    }

    else if (percent >= 60)
    {
        printf("Congratulations you get Grade C and you won the Third prize");
    }

    else if (percent >= 35)
    {
        printf(" you passed the Exam");
    }
    else
    {
        printf("Sorry you failed the Exam\n Work hard next time");
    }
    end:
 return 0; 
 }