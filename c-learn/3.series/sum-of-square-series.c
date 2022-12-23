#include<stdio.h>

int main()


{
    int num,i,sum=0;

    printf("Enter the last number of the series: ");
    scanf("%d",&num);

    for(i=1;i<=num;i=i+1)
    {
        sum=sum+i*i;
    }

    printf("Sum of the series is: %d",sum);



    getch();
    return 0;
}
