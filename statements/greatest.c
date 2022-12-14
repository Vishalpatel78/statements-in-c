#include<stdio.h>
void main()
{
    int a,b;
    printf("enter first integer");
    scanf("%d",&a);
    printf("enter second integer");
    scanf("%d",&b);

    if(a>b)
    printf("greater num is %d",a);

    else if (a<b)
    printf("greater num is %d",b);

    else
    printf("equal");
    

}