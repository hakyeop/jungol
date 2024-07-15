#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if(a>=4)
        printf("scholarship\n");
    else if(a>=3)
        printf("next semester\n");
    else if(a>=2)
        printf("seasonal semester\n");
    else
        printf("retake\n");
}
