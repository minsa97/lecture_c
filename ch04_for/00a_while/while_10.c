// while_10.c
#include <stdio.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=m){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}