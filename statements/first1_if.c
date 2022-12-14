#include<stdio.h>
void main()
{
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    
    /*if (a>0)
    {
        printf("num is positive");
    }
    if (a<0)
    {
        printf("num is negative");
    }
    */
   //previous code using if else statements
   
   if(a>0)
   printf("number is positive");
   else
   printf("num is negative");
   // if we have only one function (one line ) in any statement then we not want to {} .

}