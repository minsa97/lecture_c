// if06.c
 
#include <stdio.h>
 
int main(void){
    printf("12x11 = ");
    int input;
    scanf("%d",&input);
    
    if(12*11 == input){
        printf("정답");
    } 
    else{
        printf("오답");
    }

    return 0;
}