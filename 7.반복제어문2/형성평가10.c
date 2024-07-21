#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    for(int i=1; i<=9; i++){
        if(a<b){
            for(int j=a; j<=b; j++){
                printf("%d * %d = %2d   ", j,i, i*j);
            }
        }
        else{
            for(int j=a; j>=b; j--){
                printf("%d * %d = %2d   ", j,i, i*j);
            }
        }
        printf("\n");
    }
}
