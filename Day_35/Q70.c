#include <stdio.h>
// to rotate an array by k position
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int n;

    for (int m = 0; m < 5; m++) {
        printf("%d\t", a[m]);}
    printf("\nenter a number :");
    scanf("%d", &n);

    for (int i=0;i<n;i++) {
        b[i]=a[5-n+i];
    }
    for (int k=4;k>=n;k--) {
        a[k]=a[k-n];
    }
    for (int i=0;i<n;i++) {
        a[i]=b[i];
    }
    printf("\n");
    for (int l=0;l<5;l++) {
        printf("%d\t", a[l]);
    }
    return 0;
}
