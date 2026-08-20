#include <stdio.h>
// to calculate profit and loss
int main()
{
    float sp , cp;
    printf("enter a cost price :");
    scanf("%f", &cp);
    printf("enter a selling price :");
    scanf("%f", &sp);
       if (sp>cp){
        printf("profit,");
        printf("%.2f", sp-cp);
       }else{printf("loss,");
       printf("%.2f", cp-sp);}
    return 0;
}
