#include<stdio.h>
#include<math.h>

int main() {
	printf("==Validando Quadrado Perfeito==\n\n");
	
	int n, aux, raiz;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	raiz = sqrt(n) * 10;
	aux = raiz % 10;
	
	if(aux != 0){
		printf("Nao eh um quadrado perfeito!\n");
	}
	else {
		printf("Eh um quadrado perfeito!\n");
		printf("Sua raiz eh : %.0lf\n", sqrt(n));
	}
	
	return 0;
}
