#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c,smallest;
 printf("\n enter the values of three numbers");
 scanf("%d %d %d",&a,&b,&c);
 if(a<b && a<c)
 {
 printf("\n smallest=%d",a);
}
 else if(b<a && b<c)
 {
 printf("\n smallest=%d",b);
 }
 else
 printf("\n smallest=%d",c);
 return 0;
}