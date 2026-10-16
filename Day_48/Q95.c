#include <stdio.h>
#include <string.h>
//to check if one rotation of another
int main()
{
    char a[100];
    printf("enter string a:");
    scanf("%[^\n]",a);
    char t,c=0;
    int s=strlen(a);
    //puts(a); 
    char b[100];
    printf("enter string b:");
    scanf(" %[^\n]",b);
    
    for(int i=0;i<s-1;i++){
        t=a[0];
        a[0]=a[s-1];
        for(int j=s-2;j>0;j--){
            a[j+1]=a[j];
        }a[1]=t;
     for(int k=0;a[k]!='\0';k++){
        if(a[k]==b[k]){
            c++;
        }
     }      
    }if(c==s){
        printf("rotation");
    }else{printf("not rotation");}
    
    
}
