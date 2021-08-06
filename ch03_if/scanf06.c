// scanf06.c

// 길이 (km)를 입력받으시오. 
// m로 환산해서 출력하시오.
// cm 로 환산해 또 출력하시오.
// mm 로 환산해서 또 출력하시오.

#include <stdio.h>

int main(void){
    int km;
    printf("길이 입력(km단위) :  ");
    scanf("%d", &km);
    
    printf("%d m  입니다.\n", km*1000);   
    printf("%d cm 입니다.\n", km*10000);
    printf("%d mm 입니다.\n", km*1000000);
    
    return 0;
}
