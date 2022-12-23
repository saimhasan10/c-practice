#include<stdio.h>

double triArea(double b,double h)
{
    return 0.5 *b*h;
}

int main()
{
    double base,height,result;

    printf("Enter the value of base: ");
    scanf("%lf",&base);

    printf("Enter the value of height: ");
    scanf("%lf",&height);

    result= triArea(base,height);
    printf("The area of triangle is: %lf",result);

}
