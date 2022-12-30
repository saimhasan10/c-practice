#include<stdio.h>
int main()

{
    FILE *file;
    char ch1[50];
    char ch2[50];

    file= fopen("name5.txt","r");

    if(file==NULL)
        printf("File does not exits");
    else
    {
        printf("file is opened\n");
        fscanf(file,"%s\t%s",&ch1,&ch2);
        printf("%s\t%s",ch1,ch2);

        fclose(file);
    }
}
