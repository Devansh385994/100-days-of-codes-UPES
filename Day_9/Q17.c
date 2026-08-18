#include <stdio.h>
#include <math.h>
// to calculate roots of a quadratic equation
int main()
{
    float a,b,c,r1,r2,d;
    printf("enter a number :");
    scanf("%f",&a);
    printf("enter a number :");
    scanf("%f",&b);
    printf("enter a number :");
    scanf("%f",&c);
r1 = (-b + sqrt(pow(b,2)+(4*a*c)))/2*a;
r2 = (-b - sqrt(pow(b,2)+(4*a*c)))/2*a;
d = pow(b,2)+(4*a*c);
printf("%.0fx^2 + %.0fx + %.0f\n", a,b,c);
if(d>0){printf("roots are real and different : %f , %f", r1, r2);}
    else if(d=0){printf("roots are real and equal : %f , %f", r1, r2);}
    else{printf("roots are Imaginary ");}
    return 0;
}
