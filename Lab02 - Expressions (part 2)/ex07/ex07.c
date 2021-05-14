#include<stdio.h>

int main() {
	printf("==Operadores Booleanos==\n\n");
	
	int A, B;
	
	printf("Digite 0 para falso e nao 0 para verdadeiro\n");
	printf("Entre com o primeiro valor (A): ");
	scanf("%d", &A);
	printf("Entre com o segundo valor (B): ");
	scanf("%d", &B);

		
	if(A==0 && B==0){
		printf("A and B: %d\n", 0);
		printf("A or B: %d\n", 0);
		printf("A xor B: %d\n", 0);
		printf("not A: %d\n", 1);
	}
	else if(A==0 && B!=0){
		printf("A and B: %d\n", 0);
		printf("A or B: %d\n", 1);
		printf("A xor B: %d\n", 1);
		printf("not A: %d\n", 1);
	}
	else if(A!=0 && B==0){
		printf("A and B: %d\n", 0);
		printf("A or B: %d\n", 1);
		printf("A xor B: %d\n", 1);
		printf("not A: %d\n", 0);
	}
	else {
		printf("A and B: %d\n", 1);
		printf("A or B: %d\n", 1);
		printf("A xor B: %d\n", 0);
		printf("not A: %d\n", 0);
	}
	
	return 0;
}


/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/