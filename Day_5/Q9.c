#include <stdio.h>
#include <math.h>
//to calculate the simple interest and compound interest
int main()
{
    float p,r,t;
    printf("enter the principle amount :");
    scanf("%f",&p);
    printf("enter rate of interest :");
    scanf("%f",&r);
    printf("enter time in years :");
    scanf("%f",&t);

    float si=(p*r*t)/100;
    printf("simple interest :%.2f\n",si);
    float ci=p*(pow((1+r/100),t))-p;
    printf("compound interest :%.2f",ci);
    return 0;
}
