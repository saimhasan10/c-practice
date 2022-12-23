/*
relational operator
< > <= >=
conditional control statement(if else,switch),loop control statement

*/

#include<stdio.h>

int main()


{
    int num;

    printf("Enter an integer number:");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("Even");

    else
        printf("odd");


    getch();
    return 0;
}
