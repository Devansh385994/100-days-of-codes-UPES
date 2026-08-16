#include <stdio.h>
// to check whether an integer is positive,negetive or zero using nested if-else
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>=0)
    {if(n==0){printf("zero");}
    else{printf("positive");}}
    else{printf("negetive");}
    return 0;
}
