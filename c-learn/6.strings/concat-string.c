#include<stdio.h>
int main()
{
    char str1[30]={"My name is "};
    char str2[]={"Saim Hasan"};

    //strcat(str1,str2);

   //printf("Str1 says that: %s\n",str1);
    //printf("Str1 says that: %s",str1);


    // manually concatenete
    int i=0,j=0,len=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("after manually concat: %s",str1);
}
