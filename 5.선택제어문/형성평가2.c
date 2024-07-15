#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>0)
        printf("plus\n");
    else if(a==0)
        printf("zero\n");
    else
        printf("minus\n");
}
