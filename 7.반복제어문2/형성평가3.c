#include <stdio.h>
int main()
{
    int a,b=0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        if(i%5==0)
            b+=i;
    }
    printf("%d\n", b);
}
