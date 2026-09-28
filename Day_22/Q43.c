#include <stdio.h>
// to check if a number is strong number or not

int printfact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;}
        return fact;
    }

int main()
{
    int n,m,t;
    int sum=0;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=n;i>0;i/=10){
        m=i%10;
        t=printfact(m);
        sum+=t;
    }
    if(n==sum){
        printf("number is strong number");
    }else{printf("number is not strong number");}
    return 0;
}
