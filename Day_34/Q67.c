#include <stdio.h>
// to insert an element in an array at the given position
int main()
{
    int n,m;
    int a[6]={1,2,4,7,8};
    printf("enter a number :");
    scanf("%d",&n);
    printf("enter the index number (0-5) :");
    scanf("%d",&m);
            for(int j=4;j>=m;j--){
                a[j+1]=a[j];
            }a[m]=n;
    for(int k=0;k<6;k++){
        printf("%d",a[k]);
    }return 0;
}
