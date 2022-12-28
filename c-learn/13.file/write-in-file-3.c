#include<stdio.h>
int main()
{

    FILE *file;
    char name[100];
    int age;

    file =fopen("name-4.txt","a");

    if(file ==NULL)
        printf("File does not exits\n");
    else
    {
        printf("File is opened \n");

        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file,"Name is: %s, Age is: %d\n",name,age);

        printf("File written successfully");
        fclose(file);
    }


}
