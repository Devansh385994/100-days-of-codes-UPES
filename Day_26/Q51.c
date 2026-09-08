
#include <stdio.h>
// to print a pattern
int main()
{
    int c=1,b=5;
    for(int i=1;i<=5;i++){
        for(int j=0;j<b;j++){
            printf(" ");
        }b--;for(int a=1,n=5;a<=c;n--,a++){
            printf("%d",n);
        }c++;
        printf("\n");
    }
    return 0;
}
