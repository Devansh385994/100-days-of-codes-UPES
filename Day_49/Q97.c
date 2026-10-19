#include <stdio.h>
//to print the initials of a name
int main()
{
    char a[100];
    printf("string a:");
    scanf("%[^\n]",a);

    if(a[0]!=' '){printf("%c.",a[0]);}
    for(int i=0;a[i]!='\0';i++){
        
        if(a[i]==' '){
            printf("%c.",a[i+1]);
        }
    }
}
