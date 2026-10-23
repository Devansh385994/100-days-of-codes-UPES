#include <stdio.h>
#include <string.h>
//to change date format
void extentstring(char a[100], int n1,int t){
    int s=strlen(a);
    for(int i=s;i>=n1;i--){
        a[i+t]=a[i];
    }
}
int main()
{
    char a[100];
    printf("enter date:");
    scanf("%[^\n]",a);
    char m,n2;
    int n;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='/'){a[i]='-';a[i+3]='-';
            m=a[i+1];
            n2=a[i+2];
            n=i+1;
            break;
        }
    }extentstring(a,n,1);
    
        if(m=='0'){switch(n2){
        case '1':a[n]='J';a[n+1]='a';a[n+2]='n';break;
        case '2':a[n]='F';a[n+1]='e';a[n+2]='b';break;
        case '3':a[n]='M';a[n+1]='a';a[n+2]='r';break;
        case '4':a[n]='A';a[n+1]='p';a[n+2]='r';break;
        case '5':a[n]='M';a[n+1]='a';a[n+2]='y';break;
        case '6':a[n]='J';a[n+1]='u';a[n+2]='n';break;
        case '7':a[n]='J';a[n+1]='u';a[n+2]='l';break;
        case '8':a[n]='A';a[n+1]='u';a[n+2]='g';break;
        case '9':a[n]='S';a[n+1]='e';a[n+2]='p';break;}}
        if(m=='1'){switch(n2){
        case '0':a[n]='O';a[n+1]='c';a[n+2]='t';break;
        case '1':a[n]='N';a[n+1]='o';a[n+2]='v';break;
        case '2':a[n]='D';a[n+1]='e';a[n+2]='c';break;
    }
} puts(a);}
