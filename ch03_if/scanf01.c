// scanf01.c

#include <stdio.h>
int main(void){
    int a,b;
    printf("a= ");
    scanf("%d",&a);

    printf("b= ");
    scanf("%d",&b);

    printf("%d+%d=%d\n",a,b,a+b);

    return 0;
}