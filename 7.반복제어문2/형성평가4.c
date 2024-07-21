#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        c+=b;
    }
    printf("%.2lf\n", (double)c/(double)a);
}
