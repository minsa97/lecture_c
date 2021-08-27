// while_08_stopwatch.c

#include <stdio.h>
#include <windows.h>

#define TIME 10

int main(void){
    int i=0, j=0, h=0;
    while(i<60){
        printf("%02d:%02d:%02d\r", h, j, i);
        i++;
        if(i==60){
            i=0;
            j++;
            if(j==60){
                j=0;
                h++;
            }
        }        
        
        Sleep(TIME);
    }
    return 0;
}
