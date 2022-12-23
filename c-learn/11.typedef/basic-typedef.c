#include<stdio.h>

int main()
{
    typedef char letter;
    typedef int  number;
    typedef float fnum;


    letter ch1,ch2;
    number num1,num2;
    fnum fnum1,fnum2;

    ch1='A';
    ch2='B';

    num1=5;
    num2=6;

    fnum1=4.5;
    fnum2=7.5;


    printf("ch1= %c\n",ch1);
    printf("ch2= %c\n",ch2);

    printf("number 1= %d\n",num1);
    printf("number 2= %d\n",num2);

    printf("float= %f\n",fnum1);
    printf("float= %f\n",fnum2);

}
