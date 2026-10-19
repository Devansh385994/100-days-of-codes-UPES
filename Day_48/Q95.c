#include <stdio.h>
#include <string.h>
//to check if another string is rotation or not
int main()
{
    char a[100];
    printf("string a:");
    scanf("%[^\n]",a);
    int s=strlen(a)-1;
    char b[100];
    printf("string b:");
    scanf(" %[^\n]",b);
    int t,same=0;
    for(int i=0;i<=s;i++){
        t=a[0];
        a[0]=a[s];
        for(int j=s-1;j>0;j--){
            a[j+1]=a[j];
        }a[1]=t;
        for(int k=0;a[k]!='\0';k++){
            if(a[k]==b[k]){
                same++;
            }
        }if(same!=0){goto outloop;}
    }outloop: if(same==s+1){
        printf("rotation");
    }else 
    printf("not rotation");

}
