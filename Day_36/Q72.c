#include <stdio.h>
// to find the sum of all elements in a matrix
int main()
{
    int a[2][2] = {{1,2},{3,4}};
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
    sum+=a[i][j];}}
    printf("sum : %d",sum);
    return 0;
}
