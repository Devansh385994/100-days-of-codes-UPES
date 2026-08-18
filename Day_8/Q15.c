#include <stdio.h>
//to check whether a character is uppercase alphabet, lowercase alphabet, digit, special character
int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
    {printf("uppercase alphabet");}
    else if(ch>='a' && ch<='z')
    {printf("lowercase alphabet");}
    else if(ch>='0' && ch<='9')
    {printf("digit");}
    else{printf("special character");}
    return 0;
}
