#include<stdio.h>
#include<stdbool.h>

int main() {
	//bool x=true;
	printf("==Operadores Logicos==\n\n");
	
	int A, B;
	
	printf("Digite 0 para falso e nao 0 para verdadeiro\n");
	printf("Entre com o primeiro valor (A): ");
	scanf("%d", &A);
	printf("Entre com o segundo valor (B): ");
	scanf("%d", &B);

	bool a=A, b=B;

	if((a && b) == 0)
		printf("A and B = FALSO\n");
	else
		printf("A and B = VERDADEIRO\n");

	if((a || b) == 0)
		printf("A or B = FALSO\n");
	else
		printf("A or B = VERDADEIRO\n");

	if(((a || b) && !(a && b)) == 0)
		printf("A xor B = FALSO\n");
	else 
		printf("A xor B = VERDADEIRO\n");

	if(!a == 0)
		printf("not A = FALSO\n");
	else
		printf("not A = VERDADEIRO\n");

	return 0;
}
