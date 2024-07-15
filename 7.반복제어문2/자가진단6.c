#include <stdio.h>
int main()
{
    int a,cnt;
    double sum=0;
    scanf("%d",&cnt);
    for(int i=0; i<cnt; i++){
        scanf("%d", &a);
        sum+=a;
    }
    printf("avg : %.1lf\n", sum/cnt);
    if(sum/cnt >= 80)
        printf("pass\n");
    else
        printf("fail\n");
}
