#include<stdio.h>

int main()

{
    int i,j;
    int A[3][4];

    printf("Enter elements for A matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // print
    printf("A =");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
}
