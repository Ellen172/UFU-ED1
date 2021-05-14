#include<stdio.h>

int main() {
	printf("<<Calculo da Media>>\n\n");
	
	double nota1, nota2, nota3;
	char nome;
	
	printf("Digite o nome do aluno: ");
	scanf("%c", &nome);
	printf("Digite a nota da prova 1: ");
	scanf("%lf", &nota1);
	printf("Digite a nota da prova 2: ");
	scanf("%lf", &nota2);
	printf("Digite a nota da prova 3: ");
	scanf("%lf", &nota3);
	
	printf("A nota da media do aluno %c. eh %.1lf\n", nome, (nota1+nota2+(nota3*2))/4);
	
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
Digite o nome do aluno: T
Digite a nota da prova 1: 40
Digite a nota da prova 2: 40
Digite a nota da prova 3: 80
A nota media do aluno C. eh 60
-------------------------------------------------------------------------------
*/