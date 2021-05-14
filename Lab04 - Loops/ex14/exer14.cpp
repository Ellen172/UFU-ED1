#include<stdio.h>

int main() {
	printf("<<Numeros primos>>\n\n");
	
	int n, count=0;
	
	printf("Entre com o valor: ");
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++){
		if(n>1 && n%i==0){
			count++;
		}
	}
	
	if(count==2){
		printf("O numero %d eh primo\n", n);
	}else {
		printf("O numero %d nao eh primo\n", n);
	}
	
	
	return 0;
}
