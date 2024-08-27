#include <stdio.h>
int main()
{
    int a[11], odd=0, even=0;
    for(int i=1; i<=10; i++){
        scanf("%d", &a[i]);
        if(i%2==1)
            odd+=a[i];
        else
            even+=a[i];
    }
    printf("odd : %d\n", odd);
    printf("even : %d\n", even);
}
