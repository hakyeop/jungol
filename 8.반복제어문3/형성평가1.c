#include <stdio.h>
int main()
{
    int n, sum=0, cnt=0;
    for(int i=0; i<20; i++){
        scanf("%d", &n);
        if(n==0)
            break;
        sum+=n;
        cnt++;
    }
    printf("%d %d\n", sum, sum/cnt);
}
