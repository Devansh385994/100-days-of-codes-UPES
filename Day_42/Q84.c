#include <stdio.h>
// to print the lowercase alaphabet of the string into uppercase letters
int main()
{
    char a[100] ;
    int c=0;
    int v=0;
    scanf("%[^\n]",a);
    for(int i=0;;i++){
        if(a[i]=='\0'){break;}printf("%c",a[i]-32);
    }
}
