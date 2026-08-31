#include <stdio.h>
// to print the sum of digits of a number
int main()
{
    int n,c;
    printf("enter a number :");
    scanf("%d",&n);
    int sum=0;

    for(int i=n; i!=0; i/=10){
        c=i%10;
        sum+=c;
    }printf("sum of the digits of %d is %d",n, sum);
    return 0;
}
