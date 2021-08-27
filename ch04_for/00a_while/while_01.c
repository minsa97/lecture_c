// while_01.c
#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);
    
    int i=1;
    while(i<=9){
        printf("%dx%d=%d\n", a, i, a*i);
        i++;
    }
    return 0;
}