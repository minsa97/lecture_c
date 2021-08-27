// while_03.c

#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    int i=1;
    int sum=0;
    
    while(i<=100){
        if(i%a==0){
            sum=sum+i;
        }
        i++;
    }
    
    printf("%d의 배수들의 합= %d\n", a, sum);
    return 0;
}
