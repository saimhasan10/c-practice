#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age,phoneNumber,num,i;

    file = fopen("student.txt","a");

    if(file==NULL)
        printf("file does not exits.");
    else
    {
        printf("File is exits\n");
        printf("Enter number of student: ");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            printf("Enter the name of student: ");
            scanf("%s",&name);

            printf("Enter the age of student: ");
            scanf("%d",&age);

            printf("Enter the phone number of student: ");
            scanf("%d",&phoneNumber);


            fprintf(file,"\n%s\t\t%d\t%d",name,age,phoneNumber);

        }

        fclose(file);
    }

}
