#include <stdio.h>
// to print number 1 to n using loop
int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d\n");
    }
    
    return 0;
}
