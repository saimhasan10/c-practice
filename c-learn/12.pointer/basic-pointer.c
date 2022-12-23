#include<stdio.h>

int main()
{
    int x=5;
    int *ptr;
    ptr = &x;

    printf("value of X: %d\n",x);
    printf("Address of X: %d\n",&x);
    printf("Address of X: %d\n",ptr);
    printf("Value of X: %d\n",*ptr);
    printf("Address of pointer: %d\n",&ptr);
}
