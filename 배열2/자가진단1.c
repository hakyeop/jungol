#include <stdio.h>
int main()
{
    char a;
    int b[26]={};
    while(1){
        scanf(" %c", &a);
        if(a<'A' || a>'Z'){
            break;
        }
        b[a-65]++;
    }
    for(int i=0; i<26; i++){
        if(b[i] > 0)
            printf("%c : %d\n", 'A'+i, b[i]);
    }
}
