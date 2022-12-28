// sum of two integer

#include<stdio.h>

int main()
{
    int num1, num2, sum ;
    float avg;

    printf("Enter two integer number: ");
    scanf("%d %d",&num1,&num2 );

    sum = num1+num2;
    printf(" Sum is: %d \n",sum);

    avg = (float)sum/2;
    printf("Average of two numbers is: %.2f \n",avg);

}
