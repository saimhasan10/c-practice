#include<stdio.h>
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1,person2;

    //input for person 1
    printf("Enter the information about Person 1: \n");
    printf("Age: ");
    scanf("%d",&person1.age);
    printf("Salary: ");
    scanf("%f",&person1.salary);

    //input for person 2
    printf("\nEnter the information about Person 2: \n");
    printf("Age: ");
    scanf("%d",&person2.age);
    printf("Salary: ");
    scanf("%f",&person2.salary);

    //output for person 1
    printf("Person 1 Age: %d\n",person1.age);
    printf("Person 1 Salary: %.2f\n",person1.salary);


    //output for person 2
    printf("\nPerson 2 Age: %d\n",person2.age);
    printf("Person 2 Salary: %.2f\n",person2.salary);



}
