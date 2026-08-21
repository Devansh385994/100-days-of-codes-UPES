#include <stdio.h>
// to calculate library fine based on late days
int main()
{
    int a;
    printf("enter the day :");
    scanf("%d",&a);
    if(a<=5 && a>=1)
    {printf("fine :₹%d", 2*a );}
    else if(a<=10 && a>=6)
    {printf("fine :₹%d", 4*a );}
    else if(a<=30 && a>=11)
    {printf("fine :₹%d", 6*a );}
    else if( a>30)
    {printf("fine : membership cancelled");}
    return 0;
}
