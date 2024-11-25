#include <stdio.h>
  int main ()
  {
      int age, marks ;
      printf ("enter the age\n");
      scanf ("%d",&age);
      printf ("you have enetered %d as your age\n",age);
      
      printf ("enter your marks\n");
      scanf ("%d",&marks);
      switch (age)
      {
      case 3:
          printf ("the age is 3\n");
             switch (marks)
          {
          case 45:
              printf ("your marks is 45\n");
              break;
          
          default:
              printf("your marks is not 45 \n");
              break;
          }
          break;
      case 13:
          printf ("the age is 13");
             switch (marks)
             {
             case 20:
                 printf ("your marks is 20\n"); 
                 break;
             
             default:
                 printf ("your marks is not 20\n");
                 break;
             } 
          break;
      case 23:
          printf ("the age is 23\n");
             switch (marks)
             {
             case 10:
                 printf("your marks are 10\n");
                 break;
             
             default:
                 printf ("your marks are not 10");
                 break;
             }
          break;
      
      default:
          printf ("the age is not 3, 13 ,23");
          break;
      }
  }