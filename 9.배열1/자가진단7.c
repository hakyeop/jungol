#include <stdio.h>
int main()
{
    int a[10], b, c=0, d=9999;
    
    for(int i=0; i<10; i++){
        scanf("%d", &b);
        if(b<100){
            if(b>c)
                c=b;
        }
        else{
            if(b<d)
                d=b;
        }
        a[i]=b;
    }
    if(c==0)
        c=100;
    if(d==9999)
        d=100;
    printf("%d %d\n", c, d);
}
