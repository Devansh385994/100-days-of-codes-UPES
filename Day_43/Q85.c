#include <stdio.h>
// to reverse a string
int main()
{
    char a[100] ;
    int c=0;
    scanf("%[^\n]",a);
    for(int i=0;;i++){if(a[i]=='\0'){break;}c++;}
    for(int j=c;j>=0;j--){
        printf("%c",a[j]);}
}
