#include<stdio.h>
int main()
{
	//method 2: Using Loops

	int a,i;
	printf("\nEnter the number you want multiplication table of : ");
	scanf("%d", &a);

	printf("Multiplication table of %d is as follows:\n\n",a);

	for(i = 1; i <= 10; i++)
	{
		printf("%d*%d = %d\n", a,i,a*i );
	}
	return 0;
}