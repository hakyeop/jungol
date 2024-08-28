#include <stdio.h>
int main()
{
    int a[100], b=0;
    while(1){
        scanf("%d", &a[b]);
        if(a[b] == 0){
            b--;
            break;
        }
        b++;
    }
    printf("%d\n", b+1);
    for(int i=0; i<=b; i++){
        if(a[i]%2==1)
            printf("%d ", a[i]*2);
        else
            printf("%d ", a[i]/2);
    }
}
