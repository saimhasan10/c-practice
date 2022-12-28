#include<stdio.h>

int main()

{
    int marks[10],i,num,sum=0;
    float avg;

    printf("How many number you want to:");
    scanf("%d ",&num);

    for(i=0; i<num; ++i)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0;i<num;i++)
    {
        sum=sum+marks[i];
    }
    avg= (float)sum/num;
    printf("The sum is: %d\n",sum);
    printf("The avg is: %f\n",avg);
}
