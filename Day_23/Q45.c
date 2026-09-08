#include <stdio.h>
// to find the sum of the series up to n terms
int main()
{
    int n,c=0;
    printf("enter a number:");
    scanf("%d",&n);
    float sum;
    float m;
    float a,b;
    for(int i=1;c<n;sum+=m){
        i*=2;a=i;
        i=2*i-1;b=i;
        i=(i+1)/2;
        m=a/b;
        c++;
    }printf("approxiate sum is %f",sum);
    return 0;
}
