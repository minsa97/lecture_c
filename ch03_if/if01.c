// if01.c
#include <stdio.h>

int main(void){
    int a=0;
    
    if(a==0){ // 조건이 맞으면 중괄호 부분을 실행하시오. 
        printf("a는 0입니다.");    
    }
    else{  // 위 조건에 속하지않는 나머지 조건일 경우 중괄호 실행. 
        printf("a는 0이 아닙니다.");
    }     
           
    return 0;
}
