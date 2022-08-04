//Factorial of a number using function

#include <stdio.h>


int factorial(int num)
{
	int fact=1,i;
	for (i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	return fact;
}

void main()
{
	int num;
	printf("Enter the limit:");
	scanf("%d",&num);
	printf("Factorial:%d",factorial(num));

}
