// if03.c
#include <stdio.h>

int main(){
    int point;
	printf("점수: ");
	scanf("%d", &point);
     
    if(point >= 90){
        printf("A");
    }
    else if(point >= 80 && point < 90){
        printf("B");
    }
    else if(point >= 70 && point < 80){
        printf("C");
    }
    else if(point >= 60 && point < 70){
        printf("D");
    }
    else if(point <70){
        printf("F");
    }    
     
    return 0;
}
