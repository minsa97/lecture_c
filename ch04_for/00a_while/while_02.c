// while_02.c

#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    int i=1;
    int count=0;
    
    while(i<=100){
        if(i%a==0){
            count++;
        }
        i++;
    }
    
    printf("%d의 배수 개수= %d개\n", a, count);
    return 0;
}
