#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file= fopen("name-4.txt","r");

    if(file==NULL)
        printf("File does not exits");
    else
    {
        printf("file is opened\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }

}
