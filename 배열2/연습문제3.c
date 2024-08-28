#include <stdio.h>
int main()
{
    int a[50];
    a[0]=1;
    a[1]=1;
    for(int i=2; i<40; i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=10; i<50; i+=10){
        printf("피보나치 수열 %d항 : %d\n", i, a[i-1]);
    }
}
