#include <stdio.h>
#include <math.h>
//to swap the last digit to the first digit
int main()
{
    int n;
    int c=0;
    int sum=0;
    int m,t,d;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=n;i>0;i/=10){
        c++;}

    for(int j=n/10,a=0;a<(c-1),j>10;a++,j/=10){
        m=j%10;
        t=m*(pow(10,a));
        sum+=t;
        d=j/10;
    }printf("swapped number:");
    printf("%d",n%10);printf("%d",sum);printf("%d",d);
}
