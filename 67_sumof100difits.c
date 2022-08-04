//To find the sum of two 100 digits numbers

#include <stdio.h>


void main()
{
	int a[100],b[100],sum[100];
	int i,temp,carry=0;
	printf("Enter the digits of a:\n");
	for (i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the digits of b:\n");
	for (i=0;i<100;i++)
	{
		scanf("%d",&b[i]);
	}

	printf("The digits of a:");
	for (i=0;i<100;i++)
	{
		printf("%d",a[i]);
	}

	printf("\nThe digits of b:");
	for (i=0;i<100;i++)
	{
		printf("%d",b[i]);
	}

	for (i=99;i>=0;i--)
	{
		temp = a[i] + b[i] + carry;
		sum[i] = temp % 10;
		carry = temp / 10;
	}



	printf("\n");
	printf("Sum:");
    printf("%d",carry);
    for (i=0;i<100;i++)
	{
		printf("%d",sum[i]);
	}

}
