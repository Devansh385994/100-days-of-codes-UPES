#include <stdio.h>
//to print the ceil of x

int bs(int a[],int tar,int st,int end){
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(a[mid]>=tar){ans=mid;end=mid-1;}
        else if(a[mid]<tar){st=mid+1;}
    }return ans;
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
    }
    int st=0,end=n-1;
    int t;
    printf("x=");
    scanf("%d",&t);
    printf("%d",bs(a,t,st,end));
    
}
