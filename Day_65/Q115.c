#include <stdio.h>
#include <string.h>
//to check if two strings are anagram or not
int main()
{
    char a[100];
    char b[100];
    int freq[26]={0};
    printf("enter string a:");
    scanf("%[^\n]",&a);
    printf("enter string b:");
    scanf(" %[^\n]",&b);
    if(strlen(a)!=strlen(b)){printf("Not Anagram");return 0;}
    for(int i=0;a[i]!='\0';i++){
        freq[a[i]-'a']++;
        freq[b[i]-'a']--;
    }int flag=1;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){flag=0;}
    }if(flag){printf("anagram");}else{printf("not anagram");}
}
