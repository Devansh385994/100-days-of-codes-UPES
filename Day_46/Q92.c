#include <stdio.h>
//to find the first repeating lowercase alphabet in a string
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    char c;
    for(int i=0;a[i]!='\0';i++){
        for(int j=1;a[i+j]!='\0';j++){
        if(a[i]==a[i+j]){c=a[i];goto out;}
    }}out:printf("%c",c);
    
}
