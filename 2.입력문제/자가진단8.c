#include <stdio.h>
int main()
{
    double a;
    double b;
    char c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    getchar();
    getchar();
    scanf("%c", &c);
    printf("%.2lf\n", a);
    printf("%.2lf\n", b);
    printf("%c", c);
}
