#include <stdio.h>
int main()
{
    int a[11], b=0, c=0;
    for(int i=1; i<11; i++){
        scanf("%d", &a[i]);
        if(i % 2 == 0)
            b+=a[i];
        else
            c+=a[i];
    }
    printf("sum : %d\n", b);
    printf("avg : %.1lf\n", c/5.0);
}
