#include <stdio.h>
int main()
{
    int a[5]={95, 75, 85, 100, 50}, b=0;
    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(a[i] > a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i=0; i<5; i++)
        printf("%d ", a[i]);
}
