#include<stdio.h>

int main() {
	printf("<< Calculo de IMC >> \n\n");
	
	double massa, altura, imc;
	
	printf("Insira seu peso (kg): ");
	scanf("%lf", &massa);
	printf("Insira sua altura (m): ");
	scanf("%lf", &altura);
	
	imc = massa / (altura * altura);
	
	if(imc < 18.5) {
		printf("Seu imc eh de %.2lf => MAGREZA\n", imc);
	}
	else if(imc < 24.9) {
		printf("Seu imc eh de %.2lf => SAUDAVEL\n", imc);
	}
	else if(imc < 29.9){
		printf("Seu imc eh de %.2lf => SOBREPESO\n", imc);
	}
	else if(imc < 34.9){
		printf("Seu imc eh de %.2lf => OBESIDADE (GRAU I)\n", imc);
	}
	else if(imc < 39.9){
		printf("Seu imc eh de %.2lf => OBESIDADE (GRAU II) SEVERA\n", imc);
	}
	else {
		printf("Seu imc eh de %.2lf => OBESIDADE (GRAU III) MORBIDA\n", imc);
	}
	
	return 0;
}
