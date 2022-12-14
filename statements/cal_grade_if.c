#include<stdio.h>
void main()
{
    int p,c,m,total;
    float per;
    printf("your marks in physics");
    scanf("%d",&p);
    printf("your marks in chemistry");
    scanf("%d",&c);
    printf("your marks in math");
    scanf("%d",&m);

    total=p+c+m;
    printf("your total marks is %d",total);
    per=total/3;
    printf("your percentage is %f",per);

    if(per>=75)
    {
        printf("your grade is : A");
    }
    else if(per<75 && per>=60)
    {
        printf("your grade is : B");
    }
    else if (per<60 && per>=48)
    {
        printf("your grade is : C");
    }
     else
    {
        printf("your grade is :D");
    }

}