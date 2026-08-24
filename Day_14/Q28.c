#include <stdio.h>
// to calculate product of first n even natural numbers using loop
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int s=1;

    for(int i=1; i<=n; i=i+1){
    s = s *(2*i);}
    printf("product of first %d even number is %d\n",n, s);
    
    return 0;
}
