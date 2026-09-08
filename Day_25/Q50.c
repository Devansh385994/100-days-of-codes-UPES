#include <stdio.h>
// to print a pattern
int main()
{
    int c=5,b=1;
    for(int i=1;i<=5;i++){
        for(int j=0;j<b;j++){
            printf(" ");
        }b++;for(int a=1;a<=c;a++){
            printf("*");
        }c--;
        printf("\n");
    }
    return 0;
}
