// longest_word.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

void main() {
    int ch;
    int len, max = 0;
    printf("���� �� �ܾ��� ���� ã��\n");


    while (1) {
        printf("�ܾ� �Է�: ");
        len = 0;
        while ((ch=getchar()) !=EOF && ch != '\n') {
            len++;
        }
                
        if (ch == EOF) {
            break;
        }
        else {
            printf("�ܾ����: %d\n", len);
            if (max < len)
                max = len;
        }
    }
    printf("���� �� �ܾ��� ���� : %d\n", max);
    return 0;
}