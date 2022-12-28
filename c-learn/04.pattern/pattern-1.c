#include<stdio.h>

int main()

{
    int n,row,col;

    printf("Enter the value of N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            //printf("%d ",col);// number pattern
            //printf("%d ",col%2); //binary pattern
            //printf("%c ",col+64); //character pattern
            printf("# "); //# pattern
        }
        printf("\n");
    }




}
