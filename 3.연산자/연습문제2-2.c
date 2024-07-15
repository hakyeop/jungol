#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    int f,g,h,i,j;
    printf("5개의 수를 입력하시오. ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    f=a+3; g=b-3; h=c*3; i=d/3; j=e%3;
    printf("%d %d %d %d %d\n", f, g, h, i, j);
}
