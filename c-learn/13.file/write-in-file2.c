#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];

    file =fopen("name3.txt","a");

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("file is exist\n");
        printf("Enter your University name: ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File written successfully");
        fclose(file);
    }

}
