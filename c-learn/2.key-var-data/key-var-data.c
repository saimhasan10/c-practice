//keyword variable and datatypes

#include <stdio.h>

int main()
{
   // manual system
   /* int num1=10, num2=20;
    float num3=30.33;
    double num4=40.4444444444;
    char ch='a';

    printf("Numbers are: %d,%d,%.2f,%lf \n",num1,num2,num3,num4);
    printf("Character is: %c",ch);

   */

   // dynamic system

   /* int num1;
   printf(" Enter your number:");
   scanf("%d", &num1);
   printf("\n Number you entered: %d",num1);
   */

   float num2;
   char ch;

   printf(" Enter your float number and character: ");
   scanf("%f %c", &num2,&ch);
   printf("your float number is:%f \n and character is %c", num2,ch);


   getch();
}
