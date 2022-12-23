#include<stdio.h>

int main()

{
    int a, b, c;

    printf("Enter two integer number: ");
    scanf("%d%d",&a,&b);

    c=a&b;
    printf("%d is :",c);


    getch();
    return 0;
}
