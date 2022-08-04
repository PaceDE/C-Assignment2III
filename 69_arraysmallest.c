//To find the smallest number among the elements of a array

#include <stdio.h>


void main()
{
    int numbers[]= {2,35,3,45,134,5};
    int i;
    int smallest=numbers[0];
    for (i=0;i<6;i++)
    {
        if (smallest>numbers[i])
        {
           smallest = numbers[i];
        }
    }
    printf("%d",smallest);

}
