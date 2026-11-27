#include <stdio.h>
//to print the longest substring
int main()
{
    char a[100];
    printf("enter a string:");
    scanf("%[^\n]",&a);
    int max=0;
    int start=0;
    for(int i=0;a[i]!='\0';i++){
        int count=0;
        for(int j=i;a[j]!='\0';j++){
            int repeat=0;
            for(int k=i;k<j;k++){
            if(a[k]==a[j]){
                repeat=1;break;
                }
            }
            if(repeat){break;}
            count++;
        }if(count>max){max=count;start=i;}
    }for(int l=start;l<start+max;l++){printf("%c",a[l]);}
}
