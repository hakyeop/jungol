#include <stdio.h>
int main()
{
    int a,cnt=0;
    for(int i=0; i<10; i++){
        scanf("%d", &a);
        if(a%2==0)
            cnt++;
    }
    printf("입력받은 짝수는 %d개입니다.\n", cnt);
}
