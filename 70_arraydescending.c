//To arrange the elements of a array in descending order

#include <stdio.h>


void main()
{
    int a[5],x,y,temp;
    printf("Enter the value of elements:\n");

    for (x=0;x<5;x++)
    {
        scanf("%d",&a[x]);
    }

    for (x=0;x<5-1;x++)
    {
        for (y=0;y<5-x-1;y++)
        {
            if(a[y] < a[y+1])
            {
                temp = a[y];
                a[y] = a[y+1];
                a[y+1] = temp;
            }
        }
    }
    printf("Elements in descending order:\n");

    for (x=0;x<5;x++)
    {
        printf("%d ",a[x]);
    }

}
