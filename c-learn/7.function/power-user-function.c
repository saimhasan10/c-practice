#include<stdio.h>

void calculatePower(double base,double exp)
{
    double i,result=1;

    for(i=1;i<=exp;i++)
    {
        result = result*base;
    }
    printf("Result is: %.2lf",result);
}


int main()
{
    double base,exp;

    printf("Enter the value of base: ");
    scanf("%lf",&base);

    printf("Enter the value of exponent: ");
    scanf("%lf",&exp);

    calculatePower(base,exp);

}
