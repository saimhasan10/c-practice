// sum of paraller series with while loop

#include<stdio.h>

int main()

{
    int num,sum=0,i=1;

    printf("Enter the last number of the series: ");
    scanf("%d",&num);

    while(i<=num)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("1 + 2 + ..... + %d = %d",num,sum);



    getch();
    return 0;
}
