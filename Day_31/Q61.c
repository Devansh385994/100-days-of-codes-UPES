#include <stdio.h>
//to search for an element in an array
int main()
{
    int a[]={12,45,12,56,23};
    int m,n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(a[i]==n){m=1;printf("found at %d index",i);break;}
    }if(m==0){printf("element not found");}
    return 0;
}
