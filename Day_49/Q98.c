#include <stdio.h>
#include <string.h>
//to print the initials of the firstname and print the surname
int main()
{
    char a[100];
    printf("string a:");
    scanf("%[^\n]",a);
    int s=strlen(a);
    int b;
    for(int j=s-1;a[j]!=' ';j--){
        b=j;
    }

    if(a[0]!=' '){printf("%c.",a[0]);}
    for(int i=0;i<b-1;i++){
        
        if(a[i]==' '){
            printf("%c. ",a[i+1]);
        }
    }for(int k=b;a[k]!='\0';k++){
        printf("%c",a[k]);
    }
}
