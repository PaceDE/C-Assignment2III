//To create a function that returns x raised to power n

#include <stdio.h>


double power(double x, int p)
{
	double a=1;

	if(p==0)
		return 1;
	else if(p>0)
	{
		while(p!=0)
		{
			a=a*x;
			p--;
		}
		return a;
	}
	else
	{
		while(p!=0)
		{
		a=a/x;
		p++;
	}
		return a;
	}
}

void main()
{
	int p;
	double x, z;
	printf("Enter x and p:\n");
	scanf("%lf%d",&x,&p);
	z=power(x, p);
	printf("x raised to power n is:%lf", z);

}
