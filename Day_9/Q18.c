#include <stdio.h>
// to assign grade according to percentage
int main()
{
    int n;
    printf("enter your percentage(0-100) :");
    scanf("%d", &n);
    if(n>=0 && n<=100)
    {if(n>=90 && n<=100)
    {printf("grade : A");}
    if(n>=80 && n<=89)
    {printf("grade : B");}
    if(n>=70 && n<=79)
    {printf("grade : C");}
    if(n>=60 && n<=69)
    {printf("grade : D");}
    if(n<60)
    {printf("grade : F");}}
    else{printf("not valid percentage");}
    return 0;
}
