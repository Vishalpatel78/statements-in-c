#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter all three unique integer");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b)
    {
        if(a>c)
        {
            printf("grt num is %d",a);
        }
        else
        printf("greater num is %d",c);

    }
    else {
        if(b>c)
        {
           printf("greatest num is %d",b);
        }
        else{
            printf("greatest num is %d",c);
        }
    }

}