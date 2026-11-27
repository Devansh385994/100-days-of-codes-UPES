#include <stdio.h>
//to print the missing number in the array
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int sum1=0;
    int sum2=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }printf("%d",sum2-sum1);

}
