#include<stdio.h>

int main()

{
    double number, sum;

    do
    {
        printf("Enter a number: ");
        scanf("%lf",&number);
        sum +=number;
    }
    while(number !=0);
    printf("Sum is %.2lf",sum);


    return 0;
}
