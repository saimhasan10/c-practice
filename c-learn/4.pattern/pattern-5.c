#include<stdio.h>


int main()

{
    int row,col,n;
    printf("Enter the value of N:");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        //space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        //pattern
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }



}

