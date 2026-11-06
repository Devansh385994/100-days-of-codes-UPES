#include <stdio.h>
#include <math.h>
//to find pivotindex

int byo1(int n){
    return sqrt((n*(n+1))/2);
}
int main()
{
    int n,x;
    printf("enter a number:");
    scanf("%d",&n);
    printf("x=%d",byo1(n));
}
