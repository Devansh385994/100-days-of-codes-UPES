#include <stdio.h>
//to print the first negetive element of each subarrays by k
void p(int n,int k,int a[]){
    printf("output:");
    for(int i=0;i<=n-k;i++){
        int g=0;
    for(int j=0+i;j<k+i;j++){
        if(a[j]<0){g=a[j];
        break;
        }
    }
    for(int j1=0+i;j1<k+i;j1++){
        if(a[j1]<0){
            if(a[j1]>g){
                g=a[j1];
            }
        }
    }
    printf("%d ",g);
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
