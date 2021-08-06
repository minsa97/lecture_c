// scanf07.c

#include <stdio.h>

int main(void){
    int salary; // 월급
    int total; // 10년 동안 받는 총금액
    
    printf("월급을 입력하시오. --> ");
    scanf("%d", &salary);
    
    total=(12*salary )*10;
    
    printf("10년동안 받은 금액= %d", total);
    
    return 0;
}