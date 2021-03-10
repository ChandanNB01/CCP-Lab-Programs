#include<stdio.h>
int main()
{
    int a,b,sum=0,diff=0,mult=0,div=0;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("\n the sum is %d",sum);
    diff=a-b;
    printf("\n the diff is %d",diff);
    mult=a*b;
    printf("\n the mult is %d",mult);
    div=a/b;
    printf("\n the div is %d",div);
    return 0;
}