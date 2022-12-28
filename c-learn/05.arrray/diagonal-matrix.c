#include<stdio.h>
int main()

{
    int i,j,A[10][10],sum;

    //input matrix
    printf("Enter element for diagonal matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //print matrix
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

    // sum of diagonal matrix
    printf("Diagonal elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf(" %d",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements is: %d",sum);
}
