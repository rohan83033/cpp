#include <stdio.h>
#include <string.h>

struct employe
{
  char name[30];
  int id;
  char department[40];
  int phone_no;
};

int main()
{
  struct employe rohan, suraj, ram, faizan;

  rohan.id = 01;
  suraj.id = 02;
  ram.id = 03;
  faizan.id = 04;

  rohan.phone_no = 1234567891;
  suraj.phone_no = 1234567892;
  ram.phone_no = 1234567893;
  faizan.phone_no = 1234567894;

  strcpy(rohan.department, "rohan is from b.c.a department\n");
  printf("rohan id is %d \n", rohan.id);
  printf("rohan phone no. is %d\n", rohan.phone_no);
  printf("%s\n", rohan.department);

  strcpy(suraj.department, "suraj is from m.c.a department\n");
  printf("suraj id is %d \n", suraj.id);
  printf("suraj phone no. is %d\n", suraj.phone_no);
  printf("%s\n", suraj.department);

  strcpy(ram.department, "ram is from b.b.a department\n");
  printf("ram id is %d \n", ram.id);
  printf("ram phone no. is %d\n", ram.phone_no);
  printf("%s\n", ram.department);
  
  strcpy (faizan.department, "faizan is from b.tech department\n");
  printf("faizan id is %d \n", faizan.id);
  printf("ram phone no. is %d\n", faizan.phone_no);
  printf("%s\n", faizan.department);
  

  return 0;
}