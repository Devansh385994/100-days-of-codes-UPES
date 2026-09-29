#include <stdio.h>
// to multiply two matrixes
void inputmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void printmatrix(int n,int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
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
    printf("matrix A:\n");
    printmatrix(n,m,a);printf("\n");

    int r2,c2;
    printf("enter number of rows of B:");
    scanf("%d",&r2);
    printf("enter number of columns of B:");
    scanf("%d",&c2);
    int b[r2][c2];
    inputmatrix(r2,c2,b);
    printf("matrix B:\n");
    printmatrix(r2,c2,b);printf("\n");

    int c[n][m];

    if((n==c2)&&(m==r2)){
        for(int i=0;i<n;i++){
            for(int j2=0;j2<c2;j2++){
                for(int j=0,i2=0;i2<r2,j<m;i2++,j++){
                  d+=a[i][j]*b[i2][j2];
            }c[i][j2]=d;d=0;}
        }printf("multiplied matrix :\n");printmatrix(n,m,c);
    }else{printf("matrix can't be multiplied because of your stupidity");}
}
