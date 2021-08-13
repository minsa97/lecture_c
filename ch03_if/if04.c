// if04.c

#include <stdio.h>

int main(void){
    int a;
    printf("a= ");
    scanf("%d", &a);
    
    if(a>0)
        printf("a는 0보다 크다.");
    else if(a<0)
        printf("a는 0보다 작다.");
    else
        printf("a는 0이다."); 
    
    return 0;
}
 