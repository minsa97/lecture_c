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
		
		printf("������ �����Ͻÿ�: ");
		char ch;
		scanf("%c",&ch);
		
		if(ch=='Q')
			break;
		
		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
		int a,b;
		scanf("%d %d",&a,&b);
		fflush(stdin);
				
		if(ch=='A')
			printf("������ ����� %d�Դϴ�.\n", a+b);
		else if(ch=='S')
			printf("������ ����� %d�Դϴ�.\n", a-b);
		else if(ch=='M')
			printf("������ ����� %d�Դϴ�.\n", a*b);
		else if(ch=='D')
			printf("������ ����� %.1f�Դϴ�.\n", (float)a/(float)b);		
	}	
	return 0;
}
