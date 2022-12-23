#include<stdio.h>
#include<math.h>


int main()

{
    //square root
    /*int x;
    double result;

    printf("Enter an integer number: ");
    scanf("%d",&x);

    result = sqrt(x);
    printf("square root is: %.2lf",result);
    */

    // power

    int x, y;
    double result;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    printf("Enter the value of y : ");
    scanf("%d",&y);

    result = pow(x,y);

    printf("\nResult is %.3lf\n",result);





    return 0;
}
