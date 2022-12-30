#include<stdio.h>
int main()
{
    FILE *file;
    char ch[50];

    file= fopen("name3.txt","r");

    if(file==NULL)
        printf("file does not exits");
    else
    {
        printf("File is opened\n");

        while(!feof(file))
        {
            fgets(ch,49,file);
            printf("%s\n",ch);
        }

        fclose(file);

    }
}
