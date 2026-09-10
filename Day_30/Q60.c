#include <stdio.h>
//to count positive,negetive and zero elments in an array
int main()
{
    int a[5];
    int m=0;
    int n=0;
    int l=0;
    for(int i=0;i<5;i++){
        printf("enter a number in %d index :",i);
        scanf("%d",&a[i]);
    }for(int j=0;j<5;j++){
       if(a[j]>0){m++;}else if(a[j]<0){n++;}else{l++;}
    }printf("there are %d positive, %d negetive and %d zero elements in the array", m,n,l);
    return 0;
}
