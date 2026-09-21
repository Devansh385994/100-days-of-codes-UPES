#include <stdio.h>
// to find the sum of each row of matrix and store it in an array
int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[2];
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
    sum+=a[i][j];
    b[i]=sum;}
    sum=0;}
    for(int k=0;k<2;k++){
        printf("%d\t",b[k]);
    }
    return 0;
}
