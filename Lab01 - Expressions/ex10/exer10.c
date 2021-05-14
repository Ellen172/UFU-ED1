#include <stdio.h>

int main() {
	printf("<<Loteria>>\n\n");
	
	double j1, j2, j3, total, premio;
	
	printf("Bolao jogador 1 R$: ");
	scanf("%lf", &j1);
	printf("Bolao jogador 2 R$: ");
	scanf("%lf", &j2);
	printf("Bolao jogador 3 R$: ");
	scanf("%lf", &j3);
	
	printf("\nInforme o valor do premio: ");
	scanf("%lf", &premio);
	
	total = j1+j2+j3;
	j1 = j1/total;
	j2 = j2/total;
	j3 = j3/total;
		
	printf("\nJogador 1 recebera R$: %.1lf\n", j1*premio);
	printf("Jogador 2 recebera R$: %.1lf\n", j2*premio);
	printf("Jogador 3 recebera R$: %.1lf\n", j3*premio);
	
	return 0;
}
