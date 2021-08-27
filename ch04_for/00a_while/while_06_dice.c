// while_06_dice.c

#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main(void){
    int no;
    int i=1;
    srand(time(NULL));
    
    while(i<=100){
        no=rand()%6 + 1;
        printf("%d ", no);

        if(i%10==0)
            printf("\n");
            
        i++;
    }
    return 0;
}
