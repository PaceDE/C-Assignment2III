//Sum of right diagonal elements

#include <stdio.h>

void add(int arr[3][3])
{
	int i,j=0,t=0;
	int sum=0;
	for (i=0;i<3;i++)
	{
		for (j=t;j<3;j++)
		{
			sum += arr[i][j];
		}
		t += 1;
	}
	printf("Sum:%d",sum);
}

void main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	add(arr);

}
