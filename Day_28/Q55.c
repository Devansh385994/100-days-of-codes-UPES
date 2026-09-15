#include <stdio.h>
//to print all the prime numbers upto n
int main()
{
    int n,m,i,j;
    m=1;
    printf("enter a number :");
    scanf("%d",&n);

    printf("2\n3\n");

    for(i=4;i<=n;i++)
    {
        for(j=2; j<=(i-1);j++)
        {
            if((i%j)==0)
            {m=0;}
        }
        if(m==1)
        {printf("%d\n",i);}
      m=1;  
    }
}
