// while_07_big_small.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int answer=rand()%100 +1;    
    
    int count=0; 
     
    // 정보 제공
    printf("크다 작다 게임입니다.\n");   
    printf("1~100 까지의 숫자를 입력하세요. --> ");
    
    // 게이머 입력을 받는다.
    int input;
    scanf("%d", &input);
    count++;
    
    // 비교 판정
    while(input != answer){
        if(input>answer)
            printf("입력하신 수는 큽니다. 더 작은 수를 입력하세요. --> ");
        if(input<answer)
            printf("입력하신 수는 작습니다. 더 큰 수를 입력하세요. --> ");
            
        scanf("%d", &input); 
        count++;
    }
    printf("정답입니다.(%d회만에 맞췄습니다.)", count); 

    return 0;
}
     
    