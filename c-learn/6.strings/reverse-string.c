#include<stdio.h>
int main()

{
    char name1[30]={"Saim Hasan"};
    char name2[40];

    //strrev(name);
    //printf("Reversed name is: %s",name);

    // manually
    int i=0,j,len=0;
    while(name1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0, i=len-1; i>=0; i--,j++)
    {
        name2[j]= name1[i];
    }
    name2[j]='\0';

    printf(" Manual reversed is: %s",name2);

}
