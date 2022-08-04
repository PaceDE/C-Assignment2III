//Addition and subtraction of two matrices using function

#include <stdio.h>


int add(int a[3][3],int b[3][3])
{
	int i,j;
	printf("Sum:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

int subtract(int a[3][3],int b[3][3])
{
	int i,j;
	printf("Difference:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int a[3][3],b[3][3];
	int i,j;
	printf("Enter the elements of A:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the elements of B:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	add(a,b);
	subtract(a,b);


}
