#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\n enter two numbers");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n swapped numbers are %d %d",a,b);
    return 0;
}