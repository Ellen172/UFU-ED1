#include<stdio.h>

int main() {
	printf("==Contagem Regressiva==\n\n");
	
	int n=10;
	
	while(n>-1){
		printf("%d...", n);
		
		n--;
	}
	
	printf("Fim!\n");
	
	return 0;
}
