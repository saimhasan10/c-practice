// side half pyramid with space

#include<stdio.h>

int main()

{
    int row,col,n;
    printf("Enter the value of N: ");
    scanf("%d",&n);

    //frst part low to high
    for(row=1; row<=n; row++)
    {
        //space
       // for(col=1; col<=n-row; col++)
        //   {
           //     printf(" ");
          // }

        //pattern
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    //second part high to low

    for(row=n-1; row>=1; row--)
    {
        //space
       // for(col=1; col<=n-row; col++)
      //  {
       //      printf(" ");
       // }

        // pattern
        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");

    }

}
