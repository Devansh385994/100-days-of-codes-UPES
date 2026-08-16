#include <stdio.h>
// to convert seconds to hours:minutes:seconds
int main()
{
    int h,m,s,n;
    printf("enter time in seconds :");
    scanf("%d",&n);
    if(n>=0)
   { s=n%60;
    m=n/60;
    h=m/60;
    printf("time : %d hours: %d minutes: %d seconds",h,m,s);}
    else{printf("error (time cannot be negetive)");}
    return 0;

}
