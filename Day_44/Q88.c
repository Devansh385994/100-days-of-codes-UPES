#include <stdio.h>
//to replace the spaces with hyphen
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==32){a[i]='-';}
    }puts(a);
    
}
