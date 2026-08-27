#include <stdio.h>
#include <math.h>
// to print a binary form of a number
int main()
{
    int n,a;
    printf("enter a number:");
    scanf("%d", &n);
    int sum=0;

    for(int i=n,count=0,m=0; count<=9; m++, i/=2){
        if(i%2==0){a=0;}else{a=1;}
        count++;
        sum+=(a*(pow(10,m)));
    }
    printf("binary number :%d",sum);
    return 0;
}
