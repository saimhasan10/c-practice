#include<stdio.h>

int maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1;i<6;i++)
    {
        if(max<x[i])
            max=x[i];
    }
    return max;
}

int main()
{
    int num[]={1,2,3,4,5,6};
    int value = maximum(num);
    printf("The maximum value is: %d",value);

}
