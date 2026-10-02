#include <stdio.h>
//to count the number of spaces,digits and special characters
int main()
{
    char a[100];
    int s=0;
    int d=0;
    int sc=0;
    scanf("%[^\n]",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==32){s++;}
        else if((a[i]>='0')&&(a[i]<='9')){d++;}
        else if((a[i]>32)&&(a[i]<=47)||(a[i]>=58)&&(a[i]<=64)||
        (a[i]>=91)&&(a[i]<=96)||(a[i]>=123)&&(a[i]<=126)){
        sc++;
        }
    }printf("spaces: %d\ndigits: %d\nspecial characters: %d",s,d,sc);
    
}
