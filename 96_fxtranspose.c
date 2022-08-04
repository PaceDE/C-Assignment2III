//To find the transpose of a given matrix

#include <stdio.h>
void t(int a[][3])
{
    int i,j;
    int transpose[3][2];

    for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			transpose[j][i] = a[i][j];
		}
	}

	printf("Transpose:\n");

	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	int i,j,transpose[3][2];

	printf("Element of a:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	t(a);

}
