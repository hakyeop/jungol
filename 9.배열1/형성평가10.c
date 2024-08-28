#include <stdio.h>
int main()
{
    int b, temp;
    scanf("%d", &b);
    int a[b];

    for(int i=0; i<b; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<b; i++){
        for(int j=i; j<b; j++){
            if(a[i] < a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<b; i++)
        printf("%d\n", a[i]);
}
