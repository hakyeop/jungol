#include <stdio.h>
int main()
{
    double a[6], b=0;
    for(int i=0; i<6; i++){
        scanf("%lf", &a[i]);
        b+=a[i];
    }
    printf("%.1lf\n", b/6);
}
