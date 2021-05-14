#include<stdio.h>

int main() {
	printf("==Contagem Regressiva==\n\n");
	
	int n=10;
	
	do{
		printf("%d...", n);
		
		n--;
	}while(n>0);	
	printf("Fim!\n");
	
	return 0;
}
