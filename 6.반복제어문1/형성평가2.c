#include <stdio.h>
int main()
{
    int a,odd=0,even=0;
    while(1){
        scanf("%d", &a);
        if(a==0)
            break;
        else if(a%2==0)
            even++;
        else
            odd++;
    }
    printf("odd : %d\n", odd);
    printf("even : %d\n", even);
}
