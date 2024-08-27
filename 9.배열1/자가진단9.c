#include <stdio.h>
int main()
{
    int a[10], b=0;
    for(int i=0; i<10; i++)
        scanf("%d ", &a[i]);
    for(int i=0; i<10; i++){
        for(int j=i; j<10; j++){
            if(a[i] < a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ", a[i]);
}
