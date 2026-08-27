#include <stdio.h>
#include <math.h>
//to check if a number is armstrong number or not
int main()
{
    int n,a,arr[20];
    printf("enter a number :");
    scanf("%d", &n);
    int c=0;
    int s=0;

    for(int i=n;i>0; i/=10){
        c++;}
    for(int j=n,k=0;j>0;k++, j/=10){
        arr[k]=j%10;}
    for(int b=c,k=0;b>0;b--,k++){
        s+=(pow(arr[k],c));}
    if(n==s){printf("number is armstrong\n");}
    else{printf("not armstrong\n");}
    //printf("%d\t%d",n,s);
    return 0;
}
