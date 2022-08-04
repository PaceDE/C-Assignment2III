//To find areas of cicles using function

#include <stdio.h>


#define PI 3.14159

float AreaofCircle(float);

float AreaofCircle(float x)
{
	return PI*x*x;
}

void main()
{
	float r1,r2;

	printf("Enter the radius of first cirlce:");
	scanf("%f",&r1);
	printf("Enter the radius of second cirlce:");
	scanf("%f",&r2);

	printf("Area of first circle:%f\n",AreaofCircle(r1));
	printf("Area of second circle:%f",AreaofCircle(r2));

}
