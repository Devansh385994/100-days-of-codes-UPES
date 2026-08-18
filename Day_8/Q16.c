#include <stdio.h>
// to find the largest number in the input
int main()
{
    int a,b,c;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    printf("enter third number :");
    scanf("%d", &c);
    if(a>b && a>c)
    {printf("first is largest");}
    else if(b>a && b>c)
    {printf("second is largest");}
    else{printf("third is largest");}
    return 0;
}
