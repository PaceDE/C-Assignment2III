//Function without argument and return type

#include <stdio.h>


void add()
{
	int a,b,sum;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	sum = a+b;
	printf("Sum:%d",sum);
	return;
}

void main()
{
	add();

}
