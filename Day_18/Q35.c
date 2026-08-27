#include <stdio.h>
// to print the factors of a number except 1 and number itself
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=2; i<(n-1); i++){
       if(n%i==0){printf("%d\t",i);}
    }
    return 0;
}
