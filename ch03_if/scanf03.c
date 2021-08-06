// scanf03.c

#include <stdio.h>

int main(){
    float r;
    
    printf("반지름: "); 
    scanf("%f", &r);
    
    printf("원둘레: %f\n", 2*3.14*r);
    printf("원넓이: %f\n", 3.14*r*r);
     
    return 0;
}