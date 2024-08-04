#include <stdio.h>
int main()
{
    int a=0, b=1;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            printf("%c ", 'a'+a);
            a++;
        }
        for(int j=4; j>=i; j--){
            printf("%d ", b++);
        }
        printf("\n");
    }
}
