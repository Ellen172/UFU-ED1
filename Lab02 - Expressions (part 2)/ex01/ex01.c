#include<stdio.h>

int main() {
	printf("<< Calculo da Media >>\n\n");
	
	int nota1, nota2;
	
	printf("Digite a nota da prova 1: ");
	scanf("%d", &nota1);
	printf("Digite a nota da prova 2: ");
	scanf("%d", &nota2);
	
	printf("A nota da media eh %d\n", (nota1+nota2)/2);
	
	return 0;
}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/