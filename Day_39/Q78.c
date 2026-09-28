#include <stdio.h>
// to find the sum of diagonal elements of the matrix

void inputmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

int main()
{
    int n,m;
    int sum=0;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of columns :");
    scanf("%d",&m);
    if(n==m){
    int a[n][m];
    printf("enter matrix:\n");
    inputmatrix(n,m,a);
    for(int i=0;i<n;i++){
            sum+=a[i][i];
    }printf("sum of diagonal elements:%d",sum);}
    else{printf("only square matrix can have diagonal\n");}
     return 0;
}
