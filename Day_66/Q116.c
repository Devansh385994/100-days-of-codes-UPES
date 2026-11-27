#include <stdio.h>
//to print the indices whose sum will be equal to the target
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter an array:");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
    int k;
    printf("enter the target number:");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){
            if(a[i]+a[j]==k){
                printf("%d %d",j,i);
                return 0;
            }
        }
    }printf("-1 -1");
}
