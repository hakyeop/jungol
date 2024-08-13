#include <stdio.h>
int main()
{
    int a[10], b, c=0, d=0;
    
    for(int i=0; i<10; i++){
        scanf("%d", &b);
        if(b%2==1 || b%2==-1){
            if(b<a[c])
                c=i;
        }
        else{
            if(b>a[d])
                d=i;
        }
        a[i]=b;
    }
    printf("%d %d\n", a[c], a[d]);
}
