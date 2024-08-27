#include <stdio.h>
int main()
{
    int a[5], b=0;
    for(int i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("%d\n", a[0]+a[2]+a[4]);
}
