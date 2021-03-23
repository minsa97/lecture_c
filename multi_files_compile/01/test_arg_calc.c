// test_arg_calc.c

//#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if(argc!=3){
        printf("인자가 부족합니다.\n");
        return 0;
    }

    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    printf("합: %d\n", a+b);
    
    return 0;
}