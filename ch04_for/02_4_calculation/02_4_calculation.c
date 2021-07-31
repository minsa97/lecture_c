// test05.c
#include <stdlib.h> 
#include <stdio.h>
	int main(void){
	while(1){
		printf("****************\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("D---- Divide\n");
		printf("Q---- Quit\n");
		printf("****************\n");
		
		printf("연산을 선택하시오: ");
		char ch;
		scanf("%c",&ch);
		
		if(ch=='Q')
			break;
		
		printf("두수를 공백으로 분리하여 입력하시오: ");
		int a,b;
		scanf("%d %d",&a,&b);
		fflush(stdin);
				
		if(ch=='A')
			printf("연산의 결과는 %d입니다.\n", a+b);
		else if(ch=='S')
			printf("연산의 결과는 %d입니다.\n", a-b);
		else if(ch=='M')
			printf("연산의 결과는 %d입니다.\n", a*b);
		else if(ch=='D')
			printf("연산의 결과는 %.1f입니다.\n", (float)a/(float)b);		
	}	
	return 0;
}
