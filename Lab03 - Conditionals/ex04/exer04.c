#include<stdio.h>

int main() {
	printf("<< Notas da Turma >> \n\n");
	
	char aluno1, aluno2, aluno3;
	double nota1, nota2, nota3;
	
	setbuf(stdin,NULL);
	printf("Entre com o nome do aluno #1: ");
	scanf("%c", &aluno1);
	printf("Entre com a nota do aluno #1: ");
	scanf("%lf", &nota1);
	
	setbuf(stdin,NULL);
	printf("\nEntre com o nome do aluno #2: ");
	scanf("%c", &aluno2);
	printf("Entre com a nota do aluno #2: ");
	scanf("%lf", &nota2);
	
	setbuf(stdin,NULL);
	printf("\nEntre com o nome do aluno #3: ");
	scanf("%c", &aluno3);
	printf("Entre com a nota do aluno #3: ");
	scanf("%lf", &nota3);
	
	if(nota1>nota2 && nota1>nota3){
		printf("%c. tem a maior nota (%.1lf) ", aluno1, nota1);
	}
	else if(nota2>nota1 && nota2>nota3){
		printf("%c. tem a maior nota (%.1lf) ", aluno2, nota2);
	}
	else if(nota3>nota2 && nota3>nota1){
		printf("%c. tem a maior nota (%.1lf) ", aluno3, nota3);
	}
	
	if(nota1<nota2 && nota1<nota3){
		printf("e %c. a menor (%.1lf)\n", aluno1, nota1);
	}
	else if(nota2<nota3 && nota2<nota3){
		printf("e %c. a menor (%.1lf)\n", aluno2, nota2);
	}  
	else if(nota3<nota2 && nota3<nota2){
		printf("e %c. a menor (%.1lf)\n", aluno3, nota3);
	}
	
	return 0;
}
