#include <stdio.h>
//to print the first and last occurance of the target number in the given array
int main()
{
    int  n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int m,l=0,o=0;
    printf("enter the target:");
    scanf("%d",&m);
    for(int j=0;j<n;j++){
        if(a[j]==m){l++;
            printf("%d,",j);break;
        }
    }for(int k=(n-1);k>=0;k--){
        if(a[k]==m){o++;
            printf("%d",k);break;
        }
    }if(l==0){
        printf("-1,-1");
    }
}
