// scanf05.c

#include <stdio.h>

int main(void){
    int w,h;
    printf("가로: "); 
    scanf("%d", &w);
    
    printf("높이: "); 
    scanf("%d", &h);
    
    // 삼각형 넓이를 계산한다. 
    float c=(float)(w*h)/2.;
    
    // 삼각형 넓이를 출력한다. 
    printf("삼각형넓이=%.2f\n",c);
    
    return 0;
}