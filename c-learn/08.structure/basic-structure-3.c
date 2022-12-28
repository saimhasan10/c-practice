#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 ={23,30555.44};
    struct Person person2,person3;

    person2.age=32;
    person2.salary=90344;

    person3=person2;

    if(person1.age==person2.age && person1.salary== person2.salary)
        printf("Both are equal");
    else
        printf("Both are not equal");


}
