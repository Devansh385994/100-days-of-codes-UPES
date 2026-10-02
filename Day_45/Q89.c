#include <stdio.h>
//to count the frequency a given character in a string
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    char c;
    int count=0;
    printf("enter the character:");
    scanf(" %c",&c);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==c){count++;}
    }printf("%d",count);
    
}
