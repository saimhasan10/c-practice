#include<stdio.h>

//Global structure
struct Person{
    char name[20];
    int age;
    float salary;

};

int main()
{
    struct Person person1,person2;

    printf("Person 1: \n");
    person1.name="comalokko";
    person1.age=23;
    person1.salary=32500.50;

    printf("Age =%d\n",person1.age);
    printf("Salary =%.3f\n",person1.salary);
}
