#include <stdio.h>
int main()
{
    int a[10], b, c=0;
    
    for(int i=0; i<10; i++){
        scanf("%d", &b);
        if(i==0)
            c=b;
        if(b<c)
            c=b;
        a[i]=b;
    }
    printf("%d\n", c);
}
