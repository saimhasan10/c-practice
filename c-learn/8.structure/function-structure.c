#include<stdio.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("Name:%s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %.2f\n",p.salary);
}



int main()
{
    struct Person person1;

    strcpy(person1.name,"kakku");
    person1.age=23;
    person1.salary=459999.77;

    display(person1);
}
