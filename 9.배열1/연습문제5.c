#include <stdio.h>
int main()
{
    int md[] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y,m;
    while(1){
        printf("YEAR = ");
        scanf("%d", &y);
        printf("MONTH = ");
        scanf("%d", &m);

        if(m==0 && y==0)
            break;
        if((m>12 || y<1) || y<0)
            printf("잘못 입력하였습니다.\n\n");
        else{
            if(m!=2){
                printf("입력하신 달의 날 수는 %d일입니다.\n\n", md[m]);
            }
            else{
                if(y%400==0 || (y%4==0 && y%100 != 0))
                    printf("입력하신 달의 날 수는 %d일입니다.\n\n", md[0]);
                else
                    printf("입력하신 달의 날 수는 %d일입니다.\n\n", md[2]);
            }
        }
    }
}
