//Accessing array using function

#include <stdio.h>


void display(int a[]);

void display(int a[])
{
	int i;
	printf("The elements of array are:\n");
	for (i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return;
}

void main()
{
	int a[5],i;
	printf("Enter the elements of array:\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a);

}
