#include<stdio.h>

int main()


{
    float marks;

    printf("Enter your marks:");
    scanf("%f",&marks);

    if(marks>100 || marks<0)
        printf("Invalid marks");

    else if(marks >= 80)
        printf("A+");

    else if(marks >= 70)
        printf("A");

    else if(marks >= 60)
        printf("B");

    else if(marks >= 50)
        printf("C");

    else if(marks >= 40)
        printf("D");

    else if(marks >= 33)
        printf("E");

    else
        printf("Fail");

    getch();
    return 0;
}
