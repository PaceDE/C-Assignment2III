#include <stdio.h>


int add(int x,int y)
{
	int sum;
	sum = x+y;
	return sum;
}

void main()
{
	int a,b, sum;
	printf("Enter your two numbers:\n");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("Sum:%d",sum);

}


