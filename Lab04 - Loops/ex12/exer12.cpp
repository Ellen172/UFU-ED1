#include<stdio.h>

int main() {
	printf("<< Soma de n valores naturais >>\n\n");
	
	int n, x, soma;
	
	printf("Quantos numeros deseja somar? ");
	scanf("%d", &n);
	
	for(int i=n; i>0; i--){
		soma+=i;
	}
	
	printf("A soma dos %d primeiros numeros naturais eh: %d", n, soma);
	
	return 0;
}
