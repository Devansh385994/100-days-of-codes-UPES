#include <stdio.h>
// to print a number in reverse order
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    printf("reversed number :");

    for(int i=n ; i>0; i/=10){
        printf("%d",i%10);
    }
    return 0;
}
