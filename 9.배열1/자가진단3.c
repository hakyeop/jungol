#include<stdio.h>
int main()
{
    int n=10;
    char a[n];
    for(int i=0; i<n; i++)
        scanf("%c ", &a[i]);
    printf("%c %c %c\n", a[0], a[3], a[6]);
}
