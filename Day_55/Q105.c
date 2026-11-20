#include <stdio.h>
//to find the majorityelement

int majorityelement(int n,int a[]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){count++;}
        }
        if(count>(n/2)){return a[i];}
        else{return -1;}
        count=0;
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
    }printf("majority element: %d",majorityelement(n,a));

}
