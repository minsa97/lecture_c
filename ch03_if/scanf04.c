// scanf04.c

#include <stdio.h>

int main(){
    int fc;
    printf("화씨온도: ");    
    scanf("%d", &fc);
    
    // 섭씨온도 계산
    float c;
    c=(fc-32)*5./9.;
    printf("%d 일때의 화씨온도는 %f의 섭씨온도와 같아요\n", fc, c);
     
    return 0;
}