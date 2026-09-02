#include <stdio.h>
// to find the product of odd digits of a number
int main()
{
    int n,m;
    printf("enter a number :");
    scanf("%d",&n);
    int fac=1;
    int i;
    for( i = n; i > 0; i /= 10){
        m = i % 10;
        if(m % 2 !=0){fac*=m;}
    }printf("product of odd digits of %d : %d",n,fac);
    return 0;

}
