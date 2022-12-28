// Program to find the average of n numbers using arrays
// how many number
//taking number
//adding number
// average number

#include<stdio.h>

int main()
{
    int marks[100], i,n,sum=0;
    double avg;

    printf("Enter how many number you want: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&marks[i]);

        // sum of array
        sum+=marks[i];

        // average of array numbers
        avg=(double) sum/n;
    }

    printf("Average of array numbers: %.2f",avg);


}
