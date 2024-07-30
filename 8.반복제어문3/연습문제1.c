#include<stdio.h>
int main()
{
    int a, cnt=0, all=0;
    scanf("%d", &a);
    while(1){
        if(all>a)
            break;
        cnt++;
        all+=cnt;
    }
    printf("%d %d\n", cnt, all);
}
