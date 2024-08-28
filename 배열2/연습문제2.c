#include <stdio.h>
int main()
{
    int a[10]={}, b;
    while(1){
        scanf("%d", &b);
        if(b==0)
            break;
        a[b%10]++;
    }
    for(int i=0; i<10; i++){
        if(a[i] > 0)
            printf("%d : %d개\n", i, a[i]);
    }
}
