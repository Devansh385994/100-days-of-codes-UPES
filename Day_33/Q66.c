#include <stdio.h>
// to insert an element in a sorted array at the appropriate position
int main()
{
    int n,m;
    int a[6]={1,2,4,7,8};
    for(int k=0;k<6;k++){
        printf("%d",a[k]);}
        printf("\n");
    printf("enter a number other than the number in array:");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if((a[i]<n)&&(n<a[i+1])){
            m=i+1;
            for(int j=5;j>=m;j--){
                a[j+1]=a[j];
            }a[m]=n;}
    }for(int k=0;k<6;k++){
        printf("%d",a[k]);
    }return 0;
}
