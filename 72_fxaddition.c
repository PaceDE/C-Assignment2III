//Addition of two numbers using function

#include <stdio.h>

int add(int ,int);
int add(int a,int b)
{
	int sum;
	sum =a+b;
	return sum;
}

void main()
{
	int x,y,sum;
	printf("Enter your number:\n");
	scanf("%d%d",&x,&y);
	sum = add(x,y);
	printf("Sum:%d",sum);

}
