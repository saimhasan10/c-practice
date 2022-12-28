#include<stdio.h>

int main()

{

    int marks[5],i,sum=0;
    float avg;

    for(i=0; i<=4; i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0; i<=4;i++)
    {
        sum= sum+marks[i];
    }
    avg=sum/5;
    printf("Sum is %d\n",sum);
    printf("Avg is %.2f\n",avg);

}
