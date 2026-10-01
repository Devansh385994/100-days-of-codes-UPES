#include <stdio.h>
// to find the length of a string without using library functions
int main()
{
    char a[]="hello world";
    int c=0;
    for(int i=0;;i++){
        if(a[i]=='\0'){break;}
        c++;
    }printf("lenght of the string is %d",c);
}
