#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int num1,num2,result;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    result= sum(num1,num2);
    printf("sum is: %d",result);

}
