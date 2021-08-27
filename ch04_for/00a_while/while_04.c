// while_04.c

#include <stdio.h>

int main(void){
    int number;
    scanf("%d",&number);
    
    int i=1;
    while(i<=number){
        if(number%i==0)
            printf("%d ", i);
        i++;
    }
    
    return 0;
}

