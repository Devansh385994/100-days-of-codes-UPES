#include <stdio.h>
// to calculate the area and perimeter of the rectangle
int main()
{
    int a,b;
    printf("length :");
    scanf("%d",&a);

    printf("breadth :");
    scanf("%d",&b);
    
    printf("perimeter :%d\n", 2*(a+b));
    printf("Area :%d\n", a*b);

    return 0;

}
