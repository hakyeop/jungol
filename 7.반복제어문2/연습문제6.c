#include <stdio.h>
int main()
{
    int a;
    double sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &a);
        sum+=a;
    }
    printf("총점 : %.0lf\n", sum);
    printf("평균 : %.1lf\n", sum/5);
}
