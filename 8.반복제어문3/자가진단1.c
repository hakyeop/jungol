#include <stdio.h>
int main()
{
    int n, odd=0, all=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(all >= n)
            break;
        if(i%2==1){
            all+=i;
            odd++;
        }
    }
    printf("%d %d\n", odd, all);
}
