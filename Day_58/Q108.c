#include <stdio.h>
//to replace the element from the product of rest elements

void p(int n,int a[]){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]==a[i]){continue;}
            count*=a[j];
        }printf("%d, ",count);
        count=1;
    }
}
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }p(n,a);

}
