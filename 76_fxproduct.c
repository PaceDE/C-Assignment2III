//To find the product of a int and float using function

#include <stdio.h>


float product(int,float);

float product(int x,float y)
{
	return x*y;
}

void main()
{
	int a;
	float b;
	printf("Enter a integer number:");
	scanf("%d",&a);
	printf("Enter a float number:");
	scanf("%f",&b);

	printf("Product: %f",product(a,b));

}
