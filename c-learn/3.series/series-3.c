//1*2 + 2*3 + .......+n1*n2=

#include<stdio.h>

int main()

{
   int num1,num2,sum=0,a=1,b=2;

   printf("Enter the value of Number_1 and number_2: ");
   scanf("%d%d",&num1,&num2);

   while(a<=num1 && b<=num2)
   {
       sum=sum+a*b;
       a=a+1;
       b=b+1;
   }
    printf("sum of the series is: %d",sum);




    getch();
    return 0;
}
