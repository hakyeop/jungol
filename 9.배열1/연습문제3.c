#include<stdio.h>
int main()
{
    int n=10;
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("%d %d %d\n", a[2], a[4], a[9]);
}
