// mycalc.c

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(int argc, char** argv){
    if(argc!=3){
        printf("Usage: %s nu1 num2\n", argv[0]);
        return 1;
    }

    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int res=sum(a,b);

    printf("%d+%d=%d\n", a,b,res);

    return 0;
}
