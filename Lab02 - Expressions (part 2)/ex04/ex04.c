#include<stdio.h>

// exemplos de entrada e saida não condiz
// funciona apenas com o escrito no final do programa

int main() {
	printf("<<Calculo da Media>>\n\n");
	
	double nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	char nome;
	
	printf("Digite o nome do aluno: ");
	scanf("%c", &nome);
	printf("Digite a nota da prova 1: ");
	scanf("%lf", &nota1);
	printf("Digite a nota da prova 2: ");
	scanf("%lf", &nota2);
	printf("Digite a nota da prova 3: ");
	scanf("%lf", &nota3);
	printf("\nDigite o peso prova 1: ");
	scanf("%d", &peso1);
	printf("Digite o peso prova 2: ");
	scanf("%d", &peso2);
	printf("Digite o peso prova 3: ");
	scanf("%d", &peso3);
	
	media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
	
	printf("\nA nota da media do aluno %c. eh %.2lf\n", nome, media);
	
	return 0;
}


/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/