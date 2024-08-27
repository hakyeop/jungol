#include <stdio.h>
int main()
{
    int a[10], b=0;
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
        b+=a[i];
    }
    printf("총점 = %d\n", b);
    printf("평균 = %.1lf\n", b/10.0);
}
