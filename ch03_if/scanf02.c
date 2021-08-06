// scanf02.c

#include <stdio.h>
int main(void){
    int w,h;
    printf("가로= ");
    scanf("%d",&w);

    printf("세로= ");
    scanf("%d",&h);

    printf("직사각형 넓이: %d\n",w*h);

    return 0;
}