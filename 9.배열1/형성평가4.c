#include <stdio.h>
int main()
{
    int a[100], cnt=0;
    while(1){
        scanf("%d", &a[cnt]);
        if(a[cnt] == -1){
            cnt--;
            break;
        }
        cnt++;
    }
    if(cnt >=3)
        for(int i=(cnt-2); i<=cnt; i++)
            printf("%d ", a[i]);
    else
        for(int i=0; i<=cnt; i++)
            printf("%d ", a[i]);
}
