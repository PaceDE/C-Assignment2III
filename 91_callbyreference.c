//Call by Reference

#include <stdio.h>


void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}

void main()
{
	int a,b;
	printf("Enter the two numbers to swap:");
	scanf("%d%d",&a,&b);
	printf("Before swapping:");
	printf("x=%d\ty=%d",a,b);
	swap(&a,&b);
	printf("\n");
	printf("After swapping:");
	printf("x=%d\ty=%d",a,b);

}
