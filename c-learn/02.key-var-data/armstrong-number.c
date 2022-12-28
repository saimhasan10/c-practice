// Find the armstrong numbers between 1 to 100

#include<stdio.h>

int main()

{
    int i,temp,rem,sum=0,initial_num,final_num;

    printf("Enter the initial number: ");
    scanf("%d",&initial_num);
    printf("Enter the final number:");
    scanf("%d",&final_num);


    for(i=initial_num; i<=final_num; i++)
    {
        temp=i;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if (sum==i)
    {
        printf("%d is a Armstrong number\n",i);
    }

    sum=0;
    }






    getch();
    return 0;
}
