#include<stdio.h>

int main()

{

    /*
    char lower;
    printf("Enter any lowercase character: ");
    scanf("%c",&lower);

    printf("The uppercase character is: %c",lower-32);// if you add 32 then it will be lowercase
    */

    char lower, upper;
    printf("Enter any lowercase character: ");
    scanf("%c",&lower);

    upper=toupper(lower); // use tolower() to convert it into lowercase
    printf("The upper letter is %c",upper);


}
