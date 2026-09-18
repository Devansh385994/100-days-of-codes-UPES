#include <stdio.h>
// to delete an element from an array
int main()
{
    int n,m;
    int a[6]={1,2,4,7,8};
    printf("enter the index number (0-5) :");
    scanf("%d",&m);
            for(int j=m;j<5;j++){
                a[j]=a[j+1];
            };
    for(int k=0;k<=3;k++){
        printf("%d\t",a[k]);
    }return 0;
}
