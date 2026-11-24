#include <stdio.h>
//to print the kth smallest number

void sortarray(int a[],int n){
    int t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main(void)
{
    int k;
    printf("enter k:");
    scanf("%d",&k);
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }sortarray(a,n);
    printf("%d",a[k-1]);
}
