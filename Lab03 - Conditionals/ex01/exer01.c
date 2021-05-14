#include<stdio.h>

int main() {
	printf("<<Calculo da Media>>\n\n");
	
	double nota1, nota2, nota3, media;
	char nome;
	
	setbuf(stdin,NULL);
	printf("Digite o nome do aluno: ");
	scanf("%c", &nome);
	printf("Digite a nota da prova 1: ");
	scanf("%lf", &nota1);
	printf("Digite a nota da prova 2: ");
	scanf("%lf", &nota2);
	printf("Digite a nota da prova 3: ");
	scanf("%lf", &nota3);
	
	media = ( (nota1 * 1) + (nota2 * 1) + (nota3*2) )/4;
	
	if(media >=60){
		printf("A nota da media do aluno %c. eh: %.1lf => APROVADO!\n", nome, media);

	} else {
		printf("A nota da media do aluno %c. eh: %.1lf => REPROVADO!\n", nome, media);

	}
		
	return 0;
}
