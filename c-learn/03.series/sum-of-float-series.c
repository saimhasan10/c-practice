//1+ 1/2+ 1/3+.......+1/n

#include<stdio.h>

int main()

{
    double n,i,sum=0;

    printf("Enter the value of n: ");
    scanf("%lf",&n);

    for(i=1;i<=n;i=i+1)
    {
        sum=sum+(1/i);
    }
    printf("Sum is: %lf",sum);







    getch();
    return 0;
}
