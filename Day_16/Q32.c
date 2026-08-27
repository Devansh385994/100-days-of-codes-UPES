#include <stdio.h>
#include <math.h>
//to find if a number is palindrome or not
int main()
{
    int n,a,s;
    printf("enter a number :");
    scanf("%d", &n);
    int c=0;

    for(int i=n;i>0; i/=10){
        c++;
    }c--;
    for(int j=n;j>0;c--, j/=10){
        a=j%10;
        s+=a*(pow(10,c));
    }if(n==s){printf("number is palindrome\n");}
    else{printf("not palindrome\n");}
   // printf("%d\t%d",n,s);
    return 0;
}
