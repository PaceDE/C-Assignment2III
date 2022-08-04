//Function with argument and no return

#include <stdio.h>


void add(int x,int y)
{
	int sum;
	sum = x+y;
	printf("Sum:%d",sum);
	return;
}

void main()
{
	int a,b;
	printf("Enter your two numbers:\n");
	scanf("%d%d",&a,&b);
	add(a,b);

}
