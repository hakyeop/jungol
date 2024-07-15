#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf", &a, &b);
    if(a>=4 && b>=4)
        printf("A\n");
    else if(a>=3 && b>=3)
        printf("B\n");
    else
        printf("C\n");
}
