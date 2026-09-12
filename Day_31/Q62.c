#include <stdio.h>
//to reverse an array without taking extra space
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a[n];
    int m,l;
    for(int k=0;k<n;k++){
    printf("enter a number for %d index :",k);
    scanf("%d",&a[k]);}
    for(int c=0;c<n;c++){
        printf("%d\t",a[c]);}
        printf("\n");
    for(int i=0;i<(n/2);i++){
        m=a[i];
        l=a[n-i-1];
        a[i]=l;
        a[n-i-1]=m;}
    for(int b=0;b<n;b++){
        printf("%d\t",a[b]);}
    return 0;
}
