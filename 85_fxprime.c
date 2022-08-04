//Prime or not using function

#include <stdio.h>


void primeornot()
{
	int i,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("Not Prime.");
			break;
		}
	}

	if(i==num)
	{
		printf("Prime Number.");
	}
}

void main()
{
	primeornot();

}
