#include<stdio.h>

int main()

{
    int num1, num2;

    printf("Enter your first number:");
    scanf("%d",&num1);


    printf("Enter your second number:");
    scanf("%d",&num2);


    if(num1 > num2){
        printf("Large number is:%d\n",num1);
    }

    else if(num2 > num1){

        printf("Large number is:%d\n",num2);
    }

    else{
        printf("Numbers are equal");
    }



    return 0;
}
