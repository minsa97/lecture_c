// if05.c
#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b){
        if(b>c)
            printf("min=%d\n", c);
        else 
            printf("min=%d\n", b);
    }else{
        if(a>c)
            printf("min=%d\n", c);
        else 
            printf("min=%d\n", a);
    }
    
    return 0;
}
        
        
