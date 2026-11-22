#include <stdio.h>
//to print the maximum element of each subarrays by k
void p(int n,int k,int a[]){
    printf("output:");
    int g;
    for(int l=0;l<=n-k;l++){
    for(int i=0+l;i<l+k;i++){
        g=a[i];
        for(int j=0+l;j<l+k;j++){
            if(a[i]<a[j]){g=a[j];}
        }
    }printf("%d, ",g);
}
}
int main(void)
{
    int k;
    printf("enter the number:");
    scanf("%d",&k);
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }p(n,k,a);
}
