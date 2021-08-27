// while_09.c

#include <stdio.h> 
int main(void){
    int i=2;
    while(i<=9){
        int j=1;        
        while(j<=9){
            printf("%2d ", j*i);        
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}