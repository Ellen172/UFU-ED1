#include<stdio.h>

int main() {
	printf("<< Tipo de triangulo >> \n\n");
	
	int a, b, c;
	
	printf("Entre com o lado A: ");
	scanf("%d", &a);
	printf("Entre com o lado B: ");
	scanf("%d", &b);
	printf("Entre com o lado C: ");
	scanf("%d", &c);
	
	if(a<0 || b<0 || c<0){
		printf("Nao sao aceitos numeros negativos!\n");
	}
	else if ( a>b+c || b>a+c || c>a+b ){
		printf("Nao eh possivel formar este triangulo\n");
	}
	else {
		if((a*a)==(b*b)+(c*c)){
			printf("Este eh um triangulo retangulo\n");
		}
		else if((a*a)>(b*b)+(c*c) || (b*b)>(a*a)+(c*c) || (c*c)>(a*a)+(b*b)){
			printf("Este eh um triangulo obtusangulo\n");
		}
		else {
			printf("Este eh um triangulo acutangulo\n");
		}
	}
	
	return 0;
}
