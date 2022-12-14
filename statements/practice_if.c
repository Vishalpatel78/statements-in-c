#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);

    if(ch>65 && ch<=90)
    {
        printf("it is a capital latter");

    }
    else if(ch>=97 && ch<=122)
    {
        printf("it is a small number");
    }
    else if(ch>=48 && ch<=57)
    
    {
        printf("it is a digit");
    }
    
    else 
    {
        printf("it is something else");

    }
}
