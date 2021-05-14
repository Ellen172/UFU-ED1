#include<stdio.h>

int main() {
	printf("<< Soma de n valores naturais >>\n\n");
	
	int n, x, soma;
	
	printf("Quantos numeros deseja somar? ");
	scanf("%d", &n);
	x = n;
	
	while(n>0){
		soma+=n;
		n--;
	}
	
	printf("A soma dos %d primeiros numeros naturais eh: %d", x, soma);
	
	return 0;
}
