#include<stdio.h>
int main()
{
    int n=100, j=0;
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        if(a[i]==0){
            j--;
            break;
        }
        j++;
    }
    for(int i=j; i>=0; i--)
        printf("%d ", a[i]);
}
