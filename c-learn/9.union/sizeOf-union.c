#include<stdio.h>
union test1
{
    int x,y;
};

union test2
{
    char ch[20];
    int x;
};

union test3
{
    int x;
    double y;
};

// compare the struct memory size
struct test4
{
    char ch;
    int x;
    double y;

};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;

    struct test4 t4;
    char ch;

    printf("Size of t1: %d\n",sizeof(t1));
    printf("Size of t2: %d\n",sizeof(t2));
    printf("Size of t3: %d\n",sizeof(t3));
    printf("Size of t4: %d\n",sizeof(t4));
    printf("Size of char: %d\n",sizeof(ch));
}
