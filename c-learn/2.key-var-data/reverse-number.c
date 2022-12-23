#include<stdio.h>

int main()

{
    int num,temp,rem,sum=0;

    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("Reverse number is: %d",sum);


    getch();
    return 0;
}
