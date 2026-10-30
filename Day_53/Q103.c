#include <stdio.h>
//to print the print the pivotindex


int pivotindex(int n,int a[n]){
    int sum1=0,sum2=0,m=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            sum1+=a[j];
        }for(int k=n-1;k>i;k--){
            sum2+=a[k];
        }if(sum1==sum2){return i;}
        else{m++;}
    sum1=0;sum2=0;}if(m==n){return -1;}
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("%d",pivotindex(n,a));
    
    
}
