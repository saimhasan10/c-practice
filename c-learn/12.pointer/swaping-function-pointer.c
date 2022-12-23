#include<stdio.h>

void swaping(int *ptr1, int *ptr2)
{
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}

int main()
{

    int x=5,y=6;

    printf("Before swaping:x= %d and y= %d \n",x,y);

    swaping(&x,&y);

    printf("After swaping:x= %d and y= %d \n",x,y);

}
