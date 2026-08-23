#include <stdio.h>
// to calculate sum of first n natural numbers using loop
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int s=0;

    for(int i=1; i<=n; i++){
    s = s +i;}
    printf("sum of %d is %d\n",n, s);
    
    return 0;
}
