//Multiplication of two given matrices

#include <stdio.h>

void mul(int a[][3], int b[][2])
{
  int mult[3][2];
  int i,j,k;

  for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			mult[i][j] =0;
			for (k=0;k<3;k++)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	printf("Multiplication of matrix A and B: \n");

  for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",mult[i][j]);
		}
		printf("\n");
	}
	return;
}



void main()
{
	int a[3][3] = {{3,5,7},{2,-3,4},{4,5,2}};
	int b[3][2] = {{7,6},{6,-5},{4,3}};
	int i,j;
	int mult[3][2];

	printf("Element of matrix A:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("Element of matrix B:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

    mul(a,b);
}


