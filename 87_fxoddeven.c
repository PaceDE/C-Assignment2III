//Even or odd number using function

#include <stdio.h>


void oddoreven(int num)
{
	if (num%2 == 0)
	{
		printf("The number is even.");
	}
	else
	{
		printf("The number is odd.");
	}
}

int main()
{
	int num;
	printf("Enter your number:");
	scanf("%d",&num);
	oddoreven(num);

}
