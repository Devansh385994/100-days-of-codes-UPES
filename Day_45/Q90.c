#include <stdio.h>
//to toggle case each character of the string
int main()
{
    char a[100];
    scanf("%[^\n]",a);
    char c;
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        if((a[i]>=65)&&(a[i]<=90)){a[i]+=32;}
        else if((a[i]>=97)&&(a[i]<=122)){a[i]-=32;}
    }puts(a);
    
}
