#include <stdio.h>
int main()
{
    char a[6] = {'J', 'U', 'N', 'G', 'O', 'L'}, b;
    int c=-1;
    scanf(" %c", &b);
    for(int i=0; i<6; i++){
        if(b == a[i])
            c=i;
    }
    if(c==-1)
        printf("none\n");
    else
        printf("%d\n", c);
}
