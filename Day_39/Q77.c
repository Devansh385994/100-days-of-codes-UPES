#include <stdio.h>
// to check if any diagonal number in a matrix

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
            if((a[0][0]==a[i][i])){sum++;}
    }}else{printf("only square matrix can have diagonal");}
    if(sum>0){printf("diagonal has same value");}
    else{printf("diagonal has not same value");}

     return 0;
}
