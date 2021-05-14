#include<stdio.h>

int main() {
	printf("<< Calculo da Media >>\n\n");
	
	double nota1, nota2;
	char nome;
	
	printf("Digite o nome do aluno: ");
	scanf("%c", &nome);
	printf("Digite a nota da prova 1: ");
	scanf("%lf", &nota1);
	printf("Digite a nota da prova 2: ");
	scanf("%lf", &nota2);
	
	printf("A nota da media do aluno %c. eh %.1lf\n", nome, (nota1+nota2)/2);
	
	return 0;
}

/*
=> Altere o algoritmo anterior para que, antes de o usuário entrar com as 
notas do aluno ele entre com a inicial do nome do aluno. Ao final, 
mostrar a inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: C
Digite a nota da prova 1: 70
Digite a nota da prova 2: 85
A nota media do aluno C. eh 77.5
-------------------------------------------------------------------------------
*/