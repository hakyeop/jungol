#include <stdio.h>
int main()
{
    int a, b;

    for(;;){
        int c=0;
        int d=0;
        scanf("%d %d", &a, &b);
        if(a>1000 || b>4000){
            printf("INPUT ERROR!\n");
        }
        else if(a==0 && b==0){
            break;
        }
        else{
            for(int i=0; i<=a; i++){
                if(((4*i) + (2*(a-i)))==b){
                    printf("%d %d\n", i, a-i);
                    d=i;
                    c=a-i;
                    break;
                }
            }
            if(d==0 && c==0)
                printf("0\n");
        }
    }
}
