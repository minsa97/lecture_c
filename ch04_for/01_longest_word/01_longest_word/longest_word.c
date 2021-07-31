// longest_word.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void main() {
    int ch;
    int len, max = 0;
    printf("가장 긴 단어의 길이 찾기\n");


    while (1) {
        printf("단어 입력: ");
        len = 0;
        while ((ch=getchar()) !=EOF && ch != '\n') {
            len++;
        }
                
        if (ch == EOF) {
            break;
        }
        else {
            printf("단어길이: %d\n", len);
            if (max < len)
                max = len;
        }
    }
    printf("가장 긴 단어의 길이 : %d\n", max);
    return 0;
}