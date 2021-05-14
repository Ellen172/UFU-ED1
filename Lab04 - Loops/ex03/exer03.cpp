#include<stdio.h>

int main() {
	printf("==Contagem Regressiva==\n\n");
	
	for(int i=11; i--; i<0){
		printf("%d...", i);
	}	
	
	printf("Fim!\n");
	
	return 0;
}
