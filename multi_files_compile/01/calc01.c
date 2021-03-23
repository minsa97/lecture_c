// calc01.c
#include <stdio.h>

int sum(int a, int b);

int main(int argc, char* argv[]){
    int res;
    res=sum(11,44);
    printf("합결과: %d\n", res);

    return 0;
}

int sum(int a,int b){
    return a+b;
}