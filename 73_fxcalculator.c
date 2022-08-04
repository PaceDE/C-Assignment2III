//Add,subtract,multiply,divide using function

#include <stdio.h>


int add(int num1,int num2)
{
	return num1+num2;
}
int subtract(int num1,int num2)
{
	return num1-num2;
}
int product(int num1,int num2)
{
	return num1*num2;
}
int division(int num1,int num2)
{
	return num1/num2;
}

void main()
{
	int num1,num2;
	char op;

	printf("Enter your first number:");
	scanf("%d",&num1);
	printf("Enter your second number:");
	scanf("%d",&num2);

	printf("Enter your operator(+,-,*,/):");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':
			printf("Add:%d",add(num1,num2));
			break;
		case '-':
			printf("Subtract:%d",subtract(num1,num2));
			break;
		case '*':
			printf("Product:%d",product(num1,num2));
			break;
		case '/':
			printf("Division:%d",division(num1,num2));
			break;
		default:
			printf("Invalid Operator.");
	}


}
