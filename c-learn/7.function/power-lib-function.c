#include<stdio.h>

int main()
{

    double base, exp, result=1,i;

    printf("Enter the value of base: ");
    scanf("%lf",&base);
    printf("Enter the value of exp:");
    scanf("%lf",&exp);

    // lib-function
    //result= pow(base,exp);

    //manual
    for(i=1;i<=exp;i++)
    {
        result= result*base;
    }

    printf("Result is: %.2lf",result);

}


