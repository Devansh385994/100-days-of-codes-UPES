#include <stdio.h>
// to check if a word is a palindrome or not
int main()
{
    char a[100] ;
    char b[100];
    int c=0;
    int v=0;
    scanf("%[^\n]",a);
    for(int i=0;;i++){if(a[i]=='\0'){break;}c++;}
    for(int i=0,j=c-1;j>=0;i++,j--){
    b[i]=a[j];}b[c]='\0';
        for(int i=0;;i++){
            if(b[i]=='\0'){break;}
            printf("%c",b[i]);
        }printf("\n");
        for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[i]){v++;}
        }
        if(c==v){printf("palindrome");}else{printf("not a  palindrome");}
}
