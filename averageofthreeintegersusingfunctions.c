#include<stdio.h>
#include<conio.h>
int avg(int,int,int);
int main()
{
    int n1,n2,n3,average=0;
    printf("\n enter three numbers");
    scanf("%d %d %d",&n1,&n2,&n3);
    average= avg(n1,n2,n3);
    printf("\n average of three integers= %d",average);
    return 0;
}
    int avg(int n1,int n2,int n3)
    {
        int avg=0;
        avg=(n1+n2+n3)/3;
    }