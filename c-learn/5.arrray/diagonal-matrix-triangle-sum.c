// sum of upper and lower triangle in diagonal matrix

#include<stdio.h>

int main()

{
    int i,j,upperSum=0,lowerSum=0,A[10][10];

    //input matrix
    printf("Enter elements for diagonal matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // print matrix
    printf("\nA = ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //sum of upper and lower triangle
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
                upperSum =upperSum + A[i][j];
            if(i>j)
                lowerSum =lowerSum + A[i][j];
        }
    }
    printf("\nSum of upper triangle elements: %d\n",upperSum);
    printf("Sum of lower triangle elements: %d\n",lowerSum);



}
