// 07_var.c

// 변수 2개에 각각 5와 10을 넣습니다.
// 합과 빼기와 곱셈과 나눗셈 결과를 출력하시오.
 
#include <stdio.h>
int main(void){
    int a=30, b=7;
    printf("합:%d\n", a+b);
    printf("빼기:%d\n", a-b);
    printf("곱하기:%d\n", a*b);
    printf("%f\n", (float)a/(float)b); 
    return 0;
}