// simplecalc.c
#include <stdio.h>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main(void){
    int a=7,b=5;
    printf("%d+%d=%d\n",a,b,sum(a,b));
    printf("%d-%d=%d\n",a,b,sub(a,b));
    printf("%d*%d=%d\n",a,b,mul(a,b));
    printf("%d/%d=%.2f\n",a,b,div(a,b));

    return 0;
}
