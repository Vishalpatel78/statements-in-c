#include<stdio.h>
void main()
{
    int a;
    printf("enter a day num");
    scanf("%d",&a);
    switch(a)
    {
        case 1: 
                printf("monday");
                break;

        case 2: 
              printf("tuesday");
              break;

        default:
                printf("wrong input");              
    }
}