#include<stdio.h>

int main()

{
    int num,i;

    printf("Enter the last number of the series: ");
    scanf("%d",&num);

    for(i=2;i<=num;i=i+2)
    {
        printf("%d\n",i);
    }




    getch();
    return 0;
}
