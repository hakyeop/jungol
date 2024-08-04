#include <stdio.h>
int main()
{
    int n, a=0, b=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf("%d ", b++);
        }
        for(int j=1; j<=i; j++){
            printf("%c ", 'A'+a);
            a++;
        }
        printf("\n");
    }
}
