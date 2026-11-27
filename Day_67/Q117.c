#include <stdio.h>
//to merge two arrays
void merge(int m,int a[m],int n,int b[n]){
    int t[m+n];
    int c=-1;
    int i=0,j=0;
    while(i<m&&j<n){
        if(a[i]>b[j]){
            c++;t[c]=b[j];j++;
        }else if(a[i]<=b[j]){
            c++;t[c]=a[i];i++;
        }
    }while(i<m){c++;t[c]=a[i];i++;}
    while(j<n){c++;t[c]=b[j];j++;}
    for(int i=0;i<m+n;i++){
        printf("%d ",t[i]);
    }
}
int main()
{
    int m;
    printf("enter size of array a:");
    scanf("%d",&m);
    int a[m];
    printf("enter array a:");
    for(int i=0;i<m;i++){
    scanf("%d",&a[i]);}
    int n;
    printf("enter size of array b:");
    scanf("%d",&n);
    int b[n];
    printf("enter array b:");
    for(int i=0;i<n;i++){
    scanf("%d",&b[i]);}
    merge(m,a,n,b);

}
