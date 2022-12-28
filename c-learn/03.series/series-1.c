// sum of Parallel series with for loop
#include<stdio.h>

int main()

{
    int num,i,sum=0;
    printf("Enter the last number:");
    scanf("%d",&num);

    for(i=1;i<=num;i=i+1)
    {
        sum=sum+i;
    }
    printf("1+2+......+%d = %d",num,sum);


    getch();
    return 0;
}
