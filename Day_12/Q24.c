#include <stdio.h>
// to calculate electricity bill based on the units consumed
int main()
{
    int a;
    printf("enter units :");
    scanf("%d",&a);
    if(a<=100 && a>=0)
    {printf("electricity bill :₹%d", 5*a );}
    else if(a<=200 && a>=101)
    {printf("electricity bill :₹%d", 7*a );}
    else if(a<=300 && a>=201)
    {printf("electricity bill :₹%d", 10*a );}
    else if( a>300)
    {printf("electricity bill :₹%d", 12*a);}
    return 0;
}
