#include <stdio.h>
// to print the number of vowels and consonants in a string
int main()
{
    char a[100] ;
    int c=0;
    int v=0;
    scanf("%[^\n]",a);
    for(int i=0;;i++){
        if(((a[i]>='A')&&(a[i]<='Z')) || ((a[i]>='a')&&(a[i]<='z'))){
            if((a[i]=='a')||(a[i]=='A')||(a[i]=='e')||(a[i]=='E')||
            (a[i]=='i')||(a[i]=='I')||(a[i]=='O')||(a[i]=='o')||(a[i]=='u')||(a[i]=='U')){v++;}
            else{c++;}
        }
        if(a[i]=='\0'){break;}
    }printf("consonants :%d\nvowels: %d",c,v);
}
