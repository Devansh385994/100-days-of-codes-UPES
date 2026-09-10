#include <stdio.h>
//to find maximum and minimum element of an array
int main()
{
    int a[3]={10,20,30};
    if((a[0]>a[1])&&(a[0]>a[2])){printf("%d is maximum",a[0]);}
    else if((a[1]>a[0])&&(a[1]>a[2])){printf("%d is maximum",a[1]);}
    else if((a[2]>a[1])&&(a[2]>a[0])){printf("%d is maximum",a[2]);}
    printf("\n");
    if(!((a[0]>a[1])&&(a[0]>a[2]))){printf("%d is minimum",a[0]);}
    else if(!((a[1]>a[0])&&(a[1]>a[2]))){printf("%d is minimum",a[1]);}
    else if(!((a[2]>a[1])&&(a[2]>a[0]))){printf("%d is minimum",a[2]);}
    else {printf("error");}
    return 0;
}
