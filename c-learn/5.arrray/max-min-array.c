// display maximum number from an array
#include<stdio.h>

int main()
{
    int num[50],n,i,max,min;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    // maximum
    max=num[0];
    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max=num[i];
    }
     printf("The maximum is: %d\n",max);

     //minimum
     min=num[0];
     for(i=1; i<n; i++)
     {
         if(min>num[i])
            min=num[i];
     }
     printf("The minimum is: %d",min);
}
