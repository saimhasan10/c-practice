#include<stdio.h>

int main()

{
    int i,j,row,col,A[10][10],transpose[10][10];

    printf("Enter row and col for the matrix: ");
    scanf("%d%d",&row,&col);

    //input
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {
                printf("A[%d][%d]= ",i,j);
                scanf("%d",&A[i][j]);
            }
            printf("\n");

    }

    //transpose matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=A[i][j];
        }
    }

    //output entered matrix
    printf("\nA = ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }

    // print transpose matrix
    printf("\nTranspose = \n");
    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
           {
                printf("%d ",transpose[i][j]);
           }
           printf("\n");
    }





}

