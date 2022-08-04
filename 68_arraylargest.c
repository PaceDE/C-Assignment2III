//To find the largest numbers among the elements of a array

#include <stdio.h>


void main()
{
    int numbers[]= {2,35,3,45,134,5};
    int i;
    int largest=numbers[0];
    for (i=0;i<6;i++)
    {
        if (largest<numbers[i])
        {
           largest = numbers[i];
        }
    }
    printf("%d",largest);

}
