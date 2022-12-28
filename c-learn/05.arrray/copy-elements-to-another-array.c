#include<stdio.h>

int main()
{
    int i,n, array1[50],array2[50];

    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

    // print array one
    printf("Array 1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }

    //copy from array1 to array2
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

    //print array2
    printf("\nArray 2: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }


    getch();
}
