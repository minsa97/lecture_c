// while_05.c

#include <stdio.h>

int main(void){
    int no;
    printf("number =  ");   
    scanf("%d", &no);
    
    while(no != 4){
        printf("number =  ");   
        scanf("%d", &no);
    }
    
    printf("Welcome!");
    
    return 0;
}