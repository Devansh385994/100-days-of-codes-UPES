#include <stdio.h>
//to print max sum using kadane's algorithm
int p(int n,int a[]){
    printf("output:");
        int max_so_far=a[0];
        int current_maxsum=a[0];
    for(int j=1;j<n;j++){
        if(a[j]>current_maxsum+a[j]){current_maxsum=a[j];
        }else{current_maxsum+=a[j];}
    }if(current_maxsum>max_so_far){
        max_so_far=current_maxsum;
    }return max_so_far;
}
int main(void)
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("%d",p(n,a));
}
