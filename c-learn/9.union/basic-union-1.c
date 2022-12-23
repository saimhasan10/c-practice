// union elements are alway use the same memory location and highest number of bytes

#include<stdio.h>
union test
{
    int x,y;

};

int main()
{
    union test t1;
    t1.x=10;
    printf("The value of X is: %d\n",t1.x);
    printf("The value of Y is: %d\n",t1.y);

    t1.y=20;
    printf("The value of Y is: %d\n",t1.y);
    printf("The value of Y is: %d\n",t1.y);

}
