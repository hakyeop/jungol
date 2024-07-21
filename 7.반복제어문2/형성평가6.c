#include <stdio.h>
int main()
{
    int a, b, sum=0;
    double cnt=0;
    scanf("%d%d", &a, &b);
    if(a<b)
        for(int i=a; i<=b; i++){
            if(i%3==0 || i%5==0){
                sum+=i;
                cnt++;
            }
        }
    else{
        for(int i=b; i<=a; i++){
            if(i%3==0 || i%5==0){
                sum+=i;
                cnt++;
            }
        }
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1lf\n", sum/cnt);
}
