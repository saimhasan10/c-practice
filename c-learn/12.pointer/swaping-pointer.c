#include<stdio.h>
int main()

{
    int x=5,y=6,temp=0;

    printf("X= %d\n",x);
    printf("Y= %d\n",y);

    int *ptr1,*ptr2;

    //pointering
    ptr1=&x;
    ptr2=&y;


    //swaping
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("Value of X is: %d\n",x);
    printf("Value of Y is: %d\n",y);
}
