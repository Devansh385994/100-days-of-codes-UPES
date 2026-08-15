#include<stdio.h>
//showing addition,subtraction,multiplication,divison of two numbers
int main()
{
float a,b;
printf("A :");
scanf("%f",&a);

printf("B :");
scanf("%f",&b);

printf("sum :%f\n", a+b);
printf("differnce :%f\n", a-b);
printf("product :%f\n",a*b);
if(b==0)
{printf("quotient :error");}
else
{printf("quotient :%f\n", a/b);}

return 0;
}
