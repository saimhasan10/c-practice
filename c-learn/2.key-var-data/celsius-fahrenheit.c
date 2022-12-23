#include<stdio.h>

int main()

{
    float  c, f,k;

    printf("Enter your temperature in celsius : ");
    scanf("%f",&c);

    f= 1.8 * c + 32;
    k= c + 273;

    printf("\n temparature in fahrenheit: %.3f \n",f);
    printf("\n temparature in kelvin: %.3f \n",k);

    return 0;

}
