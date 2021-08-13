// if08.c

#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);

    if(n<0)
        n=-n;

    printf("절대값= %d", n);
    
    return 0;
}