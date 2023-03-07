#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("Enter First Fraction:");
scanf("%d/%d",&a,&b);
printf("Enter second Fraction:");
scanf("%d/%d",&c,&d);
f=b*d;
e=((f/b)*a)+((f/d)*c);
printf("The Sum Is:%d/%d",e,f);
getch();
}
