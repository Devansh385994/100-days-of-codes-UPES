#include <stdio.h>
// to display a day of week based on a number (1-7)
int main()
{
    int a;
    printf("enter a number(1-7) :");
    scanf("%d",&a);
    switch(a)
    {case 1 : printf("monday");break;
    case 2 : printf("teusday");break;
    case 3 : printf("wednesday");break;
    case 4 : printf("thursday");break;
    case 5 : printf("friday");break;
    case 6 : printf("saturday");break;
    case 7 : printf("sunday");break;
    default : printf("not a valid day");}
    
    
    return 0;
}
