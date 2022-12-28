//Number of vowels, consonants, words, digits and other

#include<stdio.h>
int main()

{
    char str[100],ch;
    int i,vowel,consonats,words,digits,other;
    i=vowel=consonats=words=digits=other=0;

    printf("Enter a string: ");
    gets(str);
    strlwr(str);

    while((ch=str[i])!='\0')
    {

        if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
            vowel++;

        else if(ch>='a' && ch<='z')
            consonats++;

        else if(ch>='0' && ch<='9')
            digits++;

        else if(ch==' ')
            words++;

        else
            other++;



        i++;
    }
    words++;

    printf("Number of vowel= %d\n",vowel);
    printf("Number of consonats= %d\n",consonats);
    printf("Number of digits= %d\n",digits);
    printf("Number of words= %d\n",words);
    printf("Number of others= %d\n",other);

}
