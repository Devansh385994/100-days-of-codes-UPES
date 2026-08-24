#include <stdio.h>
// to calculate factorial of a number
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int s=1;

    for(int i=1; i<=n; i=i+1){
    s = s *i;}
    printf("factorial of %d is %d\n",n, s);
    
    return 0;
}
