#include<stdio.h>
int main()
{
    int n=100, j=0;
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        if(a[i]==0)
            break;
        j++;
    }
    for(int i=1; i<j; i=i+2)
        printf("%d ", a[i]);
}
