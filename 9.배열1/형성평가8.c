#include <stdio.h>
int main()
{
    int a[100], b=0;
    int sum=0, mo4=0;
    while(1){
        scanf("%d", &a[b]);
        if(a[b] == 0){
            b--;
            break;
        }
        if(a[b]%5==0){
            mo4++;
            sum+=a[b];
        }
        b++;
    }
    printf("Multiples of 5 : %d\n", mo4);
    printf("sum : %d\n", sum);
    printf("avg : %.1lf\n", sum/(double)mo4);
}
