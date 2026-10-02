#include <stdio.h>
//to check whether the both strings are anagrams or not

void strln(char a[],int *c){
    for(int i=0;a[i]!='\0';i++){
        (*c)++;}}

int main()
{
    char a[100];
    char b[100];
    printf("enter string a:");
    scanf("%[^\n]",a);
    printf("enter string b:");
    scanf(" %[^\n]",b);
    int c=0;
    int d=0;
    strln(a,&c);
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){d++;break;}
        }
    }if(c==d){printf("both strings are anagrams");}
    else{printf("not anagrams");}
}
