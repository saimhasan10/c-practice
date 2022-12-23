// file open and close

#include<stdio.h>

int main()
{
    FILE *file;
    file= fopen("name.txt","w");

    if(file== NULL)
        printf("file does not exits");
    else
    {
         printf("file is exits");
         fclose(file);
    }
}
