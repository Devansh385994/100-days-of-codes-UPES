#include <stdio.h>
// to  print the sum of two matrix

void printmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
    printf("%d\t",a[i][j]);}
    printf("\n");}
}
void inputmatrix(int n, int m, int a[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           scanf("%d",&a[i][j]);}}
}

int main()
{
    int n,m,a,b;

    printf("enter a number of rows :");
    scanf("%d",&n);
    printf("enter a number of colmuns :");
    scanf("%d",&m);

    int c[n][m];

    inputmatrix(n,m,c);
    printf("first matrix:\n");printmatrix(n,m,c);

    printf("enter a number of rows :");
    scanf("%d",&a);
    printf("enter a number of colmuns :");
    scanf("%d",&b);

    int d[a][b];
    
    inputmatrix(a,b,d);
    printf("second matrix:\n");printmatrix(a,b,d);
    
    printf("added matrix:\n");
    if((n==a)&&(m==b)){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d\t",c[i][j]+d[i][j]);
            }printf("\n");
        }
    }else{printf("only same order of matrixes can be added");}
    
    return 0;

}

