#include<stdio.h>

int main()


{
    int num,i,result=1;
    printf("Enter the last number of the series: ");
    scanf("%d",&num);


    for(i=1;i<=num;i=i+1)
    {
        result= result*i;
    }
    printf("Result is: %d",result);



    getch();
    return 0;
}
