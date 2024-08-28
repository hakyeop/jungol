#include <stdio.h>
int main()
{
    int a[100], b=0;
    int max,min;
    while(1){
        scanf("%d", &a[b]);
        if(a[b]==999){
            b--;
            break;
        }
        if(b==0){
            max=b;
            min=b;
        }
        else{
            if(a[max] < a[b])
                max=b;
            if(a[min] > a[b])
                min=b;
        }
        b++;
    }
    printf("max : %d\n", a[max]);
    printf("min : %d\n", a[min]);
}
