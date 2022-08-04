#include<stdio.h>
#include<math.h>

void roots(float a, float b, float c)
{

	float n;
	float r1,r2;
	n = pow(b,2) - 4 * a * c;
	if(n >= 0)
	{
		r1 = (-b-sqrt(n))/(2*a);
		r2 = (-b+sqrt(n))/(2*a);
		printf("The roots are %f and %f.\n", r1, r2 );
	}else if(n < 0)
	{
		r1 = (-b)/(2*a);
		r2 = (-b)/(2*a);
		printf("The imaginary roots are %f + %fi and %f - %fi.\n", r1,-n,r2,-n);
	}
}

void main()
{
	roots(5,9,1);


}
