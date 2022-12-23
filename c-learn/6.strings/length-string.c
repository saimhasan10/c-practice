#include<stdio.h>

int main()
{
    char name[]={"Saim Hasan Nahid"};

    int len=strlen(name);
    printf("Length of name is: %d",len);

    int i=0,leng=0;

    while(name[i]!='\0')
    {
        i++;
        leng++;
    }

    printf("\nLength is: %d",leng);

}
