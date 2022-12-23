#include<stdio.h>
#include<math.h>

int main()

{
    //double x = 9.98;
    //double result = log(x);
    //double result = exp(x);
    //double result = sin(x);
    //double result = round(x);
    //double result = ceil(x);
    //double result = floor(x);

   // printf("Round (%lf) = %lf",x,result);

   // unary operator
   /* int x = 5;
    int y;

    y= -x;

    printf("the value of %d is: %d",x,y);
*/

    int x= 10;
    int y= x++;

    printf("x = %d\n",x);
    printf("Y = %d\n",y);

    return 0;
}
