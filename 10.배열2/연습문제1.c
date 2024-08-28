#include <stdio.h>
int main()
{
    int a[11]={0}, b;
    while(1){
        scanf("%d", &b);
        if(b>10 || b<1)
            break;
        a[b]++;
    }
    for(int i=1; i<=10; i++){
        if(a[i] > 0)
            printf("%d : %d개\n", i, a[i]);
    }
}
