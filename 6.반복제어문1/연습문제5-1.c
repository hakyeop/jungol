#include<stdio.h>
int main()
{
    int a,b=0,c=0;
    while(1){
        scanf("%d", &a);
        if(a%2==1){
            b++;
            c+=a;
        }
        else if(a==0)
            break;
    }
    printf("홀수의 합 = %d\n", c);
    printf("홀수의 평균 = %d\n", c/b);
}
