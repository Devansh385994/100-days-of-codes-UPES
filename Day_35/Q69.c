#include <stdio.h>
// to print the second largest element of the array
int main()
{
    int a[]={23,68,98,2546,867};
    int m=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]>=a[j]){m++;}
        }if(m==4){printf("%d is the second largest",a[i]);}
        m=0;
    }
    return 0;
}
