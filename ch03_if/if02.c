// if02.c

// 짝수라면 짝수라고 표시
// 홀수라면 홀수라고 표시

#include <stdio.h>

int main(void){
    printf("숫자= ");
    int no;
    scanf("%d", &no);
    
    // 짝수라면
    if(no%2==0){
        printf("짝수");   
    }
    // 홀수라면 
    else{
        printf("홀수");
    }
     
    return 0;
}
