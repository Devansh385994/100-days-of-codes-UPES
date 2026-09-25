#include <stdio.h>
// to  print the transpose of a matrix

void printmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    printf("%d\t",a[i][j]);}
    printf("\n");}
}

int main()
{
    int n,m;
    printf("enter a number of rows :");
    scanf("%d",&n);
    printf("enter a number of colmuns :");
    scanf("%d",&m);
    int c[n][m];
    int d[m][n];

    
    for(int i=0;i<n;i++){
        printf("R%d:\n",i+1);
        for(int j=0;j<m;j++){
        printf("C%d:",j+1);
           scanf("%d",&c[i][j]);}}
    printf("original matrix:\n");printmatrix(n,m,c);
    
    for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            d[l][k]=c[k][l];
        }}
    printf("transpose matrix:\n");printmatrix(m,n,d);
    
    return 0;

}

