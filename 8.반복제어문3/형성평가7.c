#include <stdio.h>
int main()
{
    int n, num=0, a=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            printf("%c ", 'A'+a);
            a++;
        }
        for(int j=0; j<i; j++)
            printf("%d ", num++);
        printf("\n");
    }
}
