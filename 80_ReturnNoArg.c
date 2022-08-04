//Function without argument and with return type

#include <stdio.h>


int add()
{
	int a,b,sum;
	printf("Enter the numbers:");
	scanf("%d%d",&a,&b);
	sum = a + b;
	return sum;
}


void main()
{
	int x;
	x=add();
	printf("Sum:%d",x);

}
