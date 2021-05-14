#include<stdio.h>

int main() {
	printf("<<Valor do Produto com imposto>> \n\n");
	
	double valor, i;
	int fed;
	
	printf("Digite o valor do produto R$: ");
	scanf("%lf", &valor);
	printf("Digite a unidade da federacao: ");
	scanf("%d", &fed);
	
	if(fed==1){
		i = valor * 0.07;
		printf("Valor final com impostos R$: %.2lf\n", valor + i);
	}
	else if(fed==2){
		i = valor * 0.12;
		printf("Valor final com impostos R$: %.2lf\n", valor + i);
	}
	else if(fed==3){
		i = valor * 0.15;
		printf("Valor final com impostos R$: %.2lf\n", valor + i);
	}
	else if(fed==4){
		i = valor * 0.08;
		printf("Valor final com impostos R$: %.2lf\n", valor + i);
	}
	else {
		printf("Federacao nao localizada\n");
	}
	
	return 0;
}
