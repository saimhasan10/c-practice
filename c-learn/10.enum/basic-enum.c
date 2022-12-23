#include<stdio.h>

enum day_of_week
{
    a,sat,sun,mon,tue,wed,thur,fri
};

int main()
{
    enum day_of_week day1,day2;

    day1 = sun;
    day2 = mon;

    int diff;
    diff= day2-day1;
    printf("Day 1= %d\n",day1);
    printf("Day 2= %d\n",day2);
    printf("Diff= %d\n",diff);
}

