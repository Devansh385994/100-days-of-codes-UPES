#include <stdio.h>
// to check if matrix is symmetric

void inputmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           scanf("%d",&a[i][j]);}}
}
int main()
{
    int n,m,a,b;
    int d=0;

    printf("enter a number of rows :");
    scanf("%d",&n);
    printf("enter a number of colmuns :");
    scanf("%d",&m);

    int c[n][m];
    if(n==m){
        inputmatrix(n,m,c);
        for(int i=0,k=0;i<n,k<n;i++,k++){
            for(int j=0,l=0;j<n,l<n;j++,l++){
                if(c[i][j]==c[l][k]){d++;}
            }
        }if(d==(n*n)){printf("matrix is symmetric");}else{printf("not symmetric");}

    }else{printf("non-square matrix cannot be symmetric");}
    
    return 0;

}

