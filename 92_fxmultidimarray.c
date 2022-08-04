//Creating a multi dimensional array using function

#include <stdio.h>
void display(int a[][3]);

void display(int a[][3])
{
	int i,j;
	printf("The elements of array:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int a[3][3],i,j;
	printf("Enter the elements of array:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	display(a);

}
