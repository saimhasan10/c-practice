#include<stdio.h>

int main()

{

    int choice;
    float temp, convertedTemp;

    printf("Tempeature conversion menu: \n");
    printf("1. conversion from Fahrenheit to Celsius\n");
    printf("2. conversion from Celsius to Fahrenheit\n");
    printf("Choose your option: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter Fahrenheit temp value:\n");
        scanf("%f",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("Celsius temp is: %.2f",convertedTemp);
        break;

    case 2:
        printf("\nEnter Celsius temp value:\n");
        scanf("%f",&temp);
        convertedTemp = (1.8*temp) +32;
        printf("Fahrenheit temp is: %.2f",convertedTemp);
        break;

    default:
        printf("ERROR!!! Enter correct value");
    }


    getch();
    return 0;
}
