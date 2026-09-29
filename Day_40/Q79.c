#include <stdio.h>
// to print elements diagonally 
void inputmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

int main()
{
    int d=0;
    int n,m;
    printf("enter number of rows of A:");
    scanf("%d",&n);
    printf("enter number of columns of A:");
    scanf("%d",&m);
    int a[n][m];
    inputmatrix(n,m,a);
    printf("\ndiagonally printed elements:");

    int c[n][m];

    if((n==m)){
        for(int i=0;i<n;i++){
            for(int j=0,k=i;k>=0,j<=i;k--,j++){
                printf("%d",a[j][k]);}
        }for(int i=1;i<n;i++){
            for(int j=i,k=n-1;k>=i,j<n;k--,j++){
                printf("%d",a[j][k]);}
        }
    }else{printf("condition can be only statisfy by square matrix");}
}
