//Find vowel or consonant
#include<stdio.h>

int main()
{
    char ch;

    printf("Enter your letter:");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("%c is vowel",ch);
    }

    else{
        printf("%c is consonant",ch);
    }


    return 0;
}
