#include<stdio.h>
void main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);

    if(ch=='A'|| ch=='E' || ch=='I'||ch=='O' ||ch=='U')
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is a consonant");
    }   

}       