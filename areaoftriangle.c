#include<stdio.h>
#include<math.h>
float areaoftriangle(int,int,int);
int main()
{
    int a,b,c,area=0.0;
    printf("\n enter the three sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    area=areaoftriangle(a,b,c);
    printf("\n area of triangle = %d",area);
    return 0;
}
float areaoftriangle(int a,int b,int c)
{
    float s=0.0,area=0.0;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}