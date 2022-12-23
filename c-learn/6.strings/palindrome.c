#include<stdio.h>
int main()
{
    int i=0,j,len=0;
    char name1[30]= {"madam"};
    char name2[30];

    while(name1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0; i--,j++)
    {
        name2[j]=name1[i];
    }
    name2[j]=name1[i];
    printf("Reversed value is: %s\n",name2);

    int v= strcmp(name2,name1);

    if(v==0)
    {
        printf("Entered value is a palindrome");
    }
    else
        printf("Entered value is not a palindrome");


}
