#include <stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d", &a);
    for(int i=a; i<=100; i++)
        sum+=i;
    printf("%d\n", sum);
}
