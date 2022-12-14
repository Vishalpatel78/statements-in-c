#include<stdio.h>
void main()
{
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    
   if(a>0)
   printf("number is positive");
   else if(a<0)
   printf("num is negative");
   else
   printf("num is zero");
}