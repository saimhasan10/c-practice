#include<stdio.h>
//global structure
struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter information for person %d\n",i+1);
        printf("Enter name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }

    printf("\n\n");

    for(i=0; i<4; i++)
    {
        printf("Person %d\n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("Age: %d\n",person[i].age);
        printf("salary: %.2f\n\n",i+1,person[i].salary);
    }

}
