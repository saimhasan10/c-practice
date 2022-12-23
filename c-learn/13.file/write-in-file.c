// write in file

#include<stdio.h>

int main()
{
    FILE *file;
    char name[30]={"Saim Hasan Nahid"};
    int i,len;
    len=strlen(name);

    file= fopen("name2.txt","w");

    if(file== NULL)
        printf("file does not exits\n");
    else
    {

         printf("file is exits\n");
         for(i=0;i<len;i++)
         {
             fputc(name[i],file);
         }
         printf("File is written succefully");
         fclose(file);
    }
}

