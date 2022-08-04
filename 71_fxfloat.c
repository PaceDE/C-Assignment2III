//Addition of float numbers using function

#include <stdio.h>
float add(float,float);
float add(float a,float b)
{
	float sum;
	sum =a+b;
	return sum;
}

void main()
{
	float x,y,sum;
	printf("Enter your number:\n");
	scanf("%f%f",&x,&y);
	sum = add(x,y);
	printf("Sum:%f",sum);

}
