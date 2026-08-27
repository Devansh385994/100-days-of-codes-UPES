#include <stdio.h>
// to check if a number is prime or not
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=2; i<(n-1); i++){
       if(n%i==0){printf("not prime");break;}else{printf("prime");break;}
    }
    return 0;
}
