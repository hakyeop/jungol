#include <stdio.h>
int main()
{
    int a,cnt=0;
    double sum=0;
    while(1){
        scanf("%d", &a);
        if(a<0 || a>100)
            break;
        cnt++;
        sum+=a;
    }
    printf("sum : %.0lf\n", sum);
    printf("avg : %.1lf\n", sum/cnt);
}
