/*
  1
 12
123

*/

#include<stdio.h>

int main()
{
    int n,row,col;

    printf("Enter the value N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        //printing number
        for(col=1; col<=row; col++)
        {
            printf(" *");
        }
        printf("\n");
    }


}
