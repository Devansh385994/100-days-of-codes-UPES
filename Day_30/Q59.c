#include <stdio.h>
//to count even and odd numbers in an array
int main()
{
    int a[5];
    int m=0;
    int n=0;
    for(int i=0;i<5;i++){
        printf("enter a number in %d index :",i);
        scanf("%d",&a[i]);
    }for(int j=0;j<5;j++){
       if((a[j]%2)==0){m++;}else{n++;}
    }printf("there are %d even and %d odd elements in the array", m,n);
    return 0;
}
