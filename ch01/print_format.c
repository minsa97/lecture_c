// print_format.c

#include <stdio.h>

int main(void){
    printf("기본\n");
    printf("*%d*\n\n",1);
    
    printf("우측 정렬\n");
    printf("*%5d*\n",1);
    printf("우측 정렬후 공간을 0으로 채운다\n");
    printf("*%05d*\n\n",1);
 
    printf("좌측 정렬\n");
    printf("*%-05d*\n",1);
 
    printf("소수점 표시\n");
    printf("*%5.2f*\n",5.357);
    printf("*%05.2f*\n",5.357);
    printf("*%-5.2f*\n",5.357);
    printf("*%-05.2f*\n",5.357);
    
    return 0;
}