//To find the greatest number among three numbers using function

#include <stdio.h>


int greater(int, int);
void main()
{
	int a, b, c, d, e;

	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	d=greater(a, b);
	e=greater(d, c);
	printf("The greatest number is: %d", e);

}

int greater(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}
