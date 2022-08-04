#include <stdio.h>


void main()
{
	int i,j,k;
	char Fullname[50];
	char fname[50];
	char mname[50];
	char lname[50];

	printf("Enter your first name:");
	scanf("%s",fname);
	printf("Enter your middle name:");
	scanf("%s",mname);
	printf("Enter your second name:");
	scanf("%s",lname);

	for(i=0;fname[i]!='\0';i++)
	{
	Fullname[i] =fname[i];
	}
	Fullname[i]=' ';

    for(j=0;mname[j]!='\0';j++)
	{
	Fullname[i+j+1] =mname[j];
	}
	Fullname[i+j+1]=' ';
	for(k=0;lname[k]!='\0';k++)
	{
	Fullname[i+j+k+1+1] =lname[k];
	}
	Fullname[i+j+k+1+1]='\0';
	printf("\nYour first name is %s\n",fname);
	printf("Your middle name is %s\n",mname);
	printf("Your last name is %s\n",lname);
	printf("\nYour full name is %s",Fullname);

}
