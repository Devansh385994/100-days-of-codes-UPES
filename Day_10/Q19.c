#include <stdio.h>
// to check whether a triangle is equilateral, isoscles or scalene 
int main()
{
    float a,b,c;
    printf("enter side a :");
    scanf("%f",&a);
    printf("enter side b :");
    scanf("%f",&b);
    printf("enter side c :");
    scanf("%f",&c);
    
    if((a==b && a==c && b==c)||(a==c && a==b && b==c)||(c==b && a==c && b==a)){
        printf("equilateral triangle");
    }else if((a==b && a!=c && b!=c)||(a==c && a!=b && b!=c)||(c==b && a!=c && b!=a))
    {printf("isoscles triangle");}
    else{printf("scalene triangle");}
    
    return 0;
}
