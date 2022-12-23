#include<stdio.h>
int main()

{
    char name1[]={"Saim hasan"};
    char name2[]={"Saim hasan"};


    int d =strcmp(name1,name2);

    if(d==0)
    {
        printf("Name1 and name2 both are same.");
    }
    else
        printf("name1 and name2 both are not same");
}
