//Combination Problem

#include <stdio.h>


long factorial(int n)
{
	int i;
	long f=1;
	for (i=1;i<=n;i++)
	{
		f *=i;
	}
	return f;
}

void main()
{
	long f1=1,f2=1,f3=1,comb;
	int n,r;
	printf("Enter n and r:\n");
	scanf("%d%d",&n,&r);
	f1=factorial(n);
	f2=factorial(n-r);
	f3=factorial(r);

	comb = f1/(f2*f3);
	printf("The combination is:%ld",comb);

}
