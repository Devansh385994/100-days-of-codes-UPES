#include <stdio.h>
//to merge two array
int main()
{
    int n;
    printf("number of elments for first array:");
    scanf("%d",&n);
    int n1;
    printf("number of elments for second array:");
    scanf("%d",&n1);
    int a[n],b[n1];
    for(int k=0;k<n;k++){
    printf("enter a number for %d index of first array:",k);
    scanf("%d",&a[k]);}
    for(int l=0;l<n1;l++){
    printf("enter a number for %d index of second array:",l);
    scanf("%d",&b[l]);}
    printf("merged array:");
    for(int c=0;c<n;c++){
        printf("%d\t",a[c]);}
    for(int d=0;d<n1;d++){
        printf("%d\t",b[d]);}
        printf("\n");
    return 0;
}
