#include <stdio.h>
// to calculate sum of first n odd natural numbers using loop
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int s=0;

    for(int i=1; i<=n; i=i+1){
    s = s +(2*i-1);}
    printf("sum of first %d odd number is %d\n",n, s);
    
    return 0;
}
