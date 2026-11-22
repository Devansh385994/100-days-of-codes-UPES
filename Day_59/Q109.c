#include <stdio.h>
//to print the maximum sum of the subarrays
void p(int n,int k,int a[]){
    printf("output:");
    int maxsum=0;
    for(int i=0;i<k;i++){
        maxsum+=a[i];
    }int sum=maxsum;
    for(int j=k;j-k<n;j++){
        sum=sum+a[j]-a[j-k];
        if(sum>maxsum){maxsum=sum;}
    }printf("%d",maxsum);
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
