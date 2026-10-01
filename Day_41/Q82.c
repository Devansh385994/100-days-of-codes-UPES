#include <stdio.h>
// to print each character of the string in a new line
int main()
{
    char a[100];
    int c=0;
    scanf("%[^\n]",a);
    for(int i=0;;i++){
        if(a[i]=='\0'){break;}
        printf("%c\n",a[i]);
    }
}
