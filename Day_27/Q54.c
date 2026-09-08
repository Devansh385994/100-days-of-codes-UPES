
#include <stdio.h>
// to print a pattern
int main()
{
    int m=3,n=1;
    for(int i=1;i<=4;i++){
        for(int h=1;h<=m;h++){printf(" ");}m--;
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }printf("\n");
    } for(int i=3;i>0;i--){
        for(int g=1;g<=n;g++){printf(" ");}n++;
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}
