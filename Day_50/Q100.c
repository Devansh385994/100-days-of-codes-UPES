#include <stdio.h>
//to print the substrings of a string
int main()
{
    char a[100];
    printf("enter a string :");
    scanf("%[^\n]",a);
    for(int i=0;a[i]!='\0';i++){
        for(int j=i;a[j]!='\0';j++){
            for(int k=i;k<=j;k++){
                printf("%c",a[k]);
            }printf(",");
        }
    }
}
