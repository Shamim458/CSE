#include<stdio.h>

int main()
{
float x, result, x5, x4, x3, x2;
x5=x*x*x*x*x;
x4=x*x*x*x;
x3=x*x*x;
x2=x*x;
printf("Enter The Value of X:");
scanf("%f",&x);
result=3*x5+2*x4-5*x3-x2+7*x-6;
printf("The Result of equation is: %.2f",result);
}
