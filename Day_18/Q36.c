#include <stdio.h>
// to find the HCF of two input numbers
int main()
{
    int n,m,t;
    printf("enter first number :");
    scanf("%d",&n);
    printf("enter second number :");
    scanf("%d",&m);
    if(n>m){
    for(t=n%m; t>1; m=t){
        t=n%m;
        n=m;
     }printf("HCF of the numbers :%d",m);}
    else if(m>n){
    for(t=m%n; t>1; n=t){
        t=m%n;
        m=n;
     }printf("HCF of the numbers :%d",n);}
    
    return 0;
}
