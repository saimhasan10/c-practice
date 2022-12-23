// linear search not completed
#include<stdio.h>

int main()
{
    int numbers[100],value=3,i,n;
    int position=-1;

    printf("How many numbers you want to input: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    scanf("%d",&numbers);
    //printf("Enter the number you want to check: ");
    //scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(numbers[i]==value)
            {
                position=numbers[i]+1;
                break;
            }

    }
    if(position=-1)
        printf("No position found\n");

    else
        printf("The position of %d is: %d",value,position);


}
