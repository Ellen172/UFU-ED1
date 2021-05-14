#include<stdio.h>

int main(){
	printf("<<Contagem Regressiva>>\n\n");
	
	int n;
	
	printf("Digite o valor de inicio: ");
	scanf("%d", &n);
	
	do{
		printf("%d... ", n);
		n--;
	}while(n>=0);
	
	printf("FIM!");

	return 0;
}
