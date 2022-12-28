#include<stdio.h>

int square(int a)
{
    return a*a;
}

int main()
{
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);

    result=square(num);
    printf("Square is: %d",result);
}
