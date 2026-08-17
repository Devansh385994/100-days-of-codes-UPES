#include <stdio.h>
//to check whether input is vowel or consonant
int main()
{
    char a;
    printf("enter an alphabet :");
    scanf("%c",&a);
    if((a>='A' && a<='Z')||(a>='a' && a<='z'))
    {
        if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
        {printf("vowel\n");}
        else{printf("consonant\n");}
    }
    else{printf("not an alphabet\n");}
    return 0;
}
