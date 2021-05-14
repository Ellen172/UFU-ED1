#include<stdio.h>

int main(){
	printf("<<Contagem Regressiva>>\n\n");
	
	int n;
	
	printf("Digite o valor de inicio: ");
	scanf("%d", &n);
	
	while(n>=0){
		printf("%d... ", n);
		n--;
	}
	printf("FIM!");

	return 0;
}
