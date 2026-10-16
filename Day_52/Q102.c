#include <stdio.h>
//to print the ceil of x
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t,c=0;
    printf("x=");
    scanf("%d",&t);
    for(int j=0;j<n;j++){
        if(a[j]>t){
            printf("%d",j);break;
        }else{c++;}
    }if(c==n){
        printf("-1");
    }
    
}
