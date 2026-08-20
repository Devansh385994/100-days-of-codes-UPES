#include <stdio.h>
// to print name and number of days of a month using switch-case
int main()
{
    int a;
    printf("enter a number(1-12) :");
    scanf("%d", &a);
        switch(a)
        {case 1: printf("january , 31 days");break;
        case 2: printf("feburary , 28 days");break;
        case 3: printf("march , 31 days");break;
        case 4: printf("april , 30 days");break;
        case 5: printf("may , 31 days");break;
        case 6: printf("june , 30 days");break;
        case 7: printf("july , 31 days");break;
        case 8: printf("august , 31 days");break;
        case 9: printf("september , 30 days");break;
        case 10: printf("october , 31 days");break;
        case 11: printf("november , 30 days");break;
        case 12: printf("december , 31 days");break;
        default : printf("not a month");}
    return 0;
}
