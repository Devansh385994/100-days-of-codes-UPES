#include<stdio.h>
//to find the sum of first n natural number
int main()
{
    int n,m;
    printf("enter the number :");
    scanf("%d",&n);
    m=n*(n+1)/2;
    printf("sum of first %d number = %d",n,m );
    return 0;
}
