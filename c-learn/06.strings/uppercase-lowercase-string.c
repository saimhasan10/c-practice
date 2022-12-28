#include<stdio.h>
int main()

{
    char name1[20]={"saim"};
    char name2[20]={"NAHID"};

    printf("Name 1= %s\n",name1);
    printf("Name 2= %s\n\n",name2);

    strupr(name1);
    strlwr(name2);

    printf("Name 1= %s\n",name1);
    printf("Name 2= %s\n",name2);
}

