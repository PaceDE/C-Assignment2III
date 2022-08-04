#include<stdio.h>

int largest(int a[])
{
	int i,l=a[0];
	for(i=0; i<6; ++i)
		if(l < a[i]) l = a[i];
	return l;
}

void main()
{
	int arr[6] = {6,2,7,1,3,8};
	printf("Largest: %d", largest(arr));

}
