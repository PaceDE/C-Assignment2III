//Sorting the elements of array in ascending order using function

#include <stdio.h>

int sort(int arr[])
{
	int x,temp,y;
	for (x=0;x<5;x++)
	{
		for (y=0;y<5-x-1;y++)
		{
			if (arr[y]>arr[y+1])
			{
				temp = arr[y];
				arr[y] = arr[y+1];
				arr[y+1] = temp;
			}
		}
	}
}

void main()
{
	int arr[50],x;
	printf("Enter the value of elements:\n");
	for (x=0;x<5;x++)
	{
		scanf("%d",&arr[x]);
	}
	sort(arr);
	printf("The elements in ascending order:\n");
	for (x=0;x<5;x++)
	{
		printf("%d ",arr[x]);
	}

}
