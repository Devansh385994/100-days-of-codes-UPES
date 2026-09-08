#include <stdio.h>
// to find the sum of the series
int main()
{
    int n,c=1;
    printf("enter a number:");
    scanf("%d",&n);
    float sum=1;
    float m;
    float a,b;
    for(int i=2;c<n;sum+=m){
        i++;a=i;
        i++;b=i;
        m=a/b;
        c++;
    }printf("approxiate sum is %f",sum);
    return 0;
}
