#include <stdio.h>
//to print the just bigger element in the place of the element in the left direction
void p(int n,int a[]){
    printf("output:");
    for (int i = 0; i < n; i++) {
        int next_greater = -1;
        for (int j =i-1; j >=0; j--) {
            if (a[j] > a[i]) {
                next_greater = a[j];
                break;
            }
        }printf("%d,",next_greater);
    }
}
int main(void)
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }p(n,a);
}
