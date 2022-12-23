// Multiplication of two matrix
#include<stdio.h>

int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0,first[10][10],second[10][10],result[10][10];

    // taking row and col
    printf("Enter rows and column for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d%d",&r2,&c2);

    //match row and col
    while(c1!=r2)
    {
        printf("Error !! column of first matrix is not equal to row of second matrix.\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d%d",&r1,&c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d%d",&r2,&c2);
    }

    // input for first matrix
    printf("Enter element for first matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
    // input for second matrix
    printf("Enter element for second matrix: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    // multiplication
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            // to track each element of row and col
            for(k=0;k<c1;k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    //print first matrix
    printf("First= ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);

        }
        printf("\n");

    }

    //print second matrix
    printf("\nSecond= ");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);

        }
        printf("\n");
        printf("\t");

    }

     //print result
    printf("\nResult= ");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);

        }
        printf("\n");
        printf("\t");

    }



}
