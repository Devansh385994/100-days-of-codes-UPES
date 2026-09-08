#include <stdio.h>
// to print a pattern
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1,a=5;j<=i;j++,a--){
            printf("%d",a);
        }printf("\n");
    }
    return 0;
}
