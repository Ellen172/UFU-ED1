#include<stdio.h>

int main() {
	
	char option = 's';
	double v;
	
	while (option != 'q'){
		printf("<< Conversor >> \n\n");
		printf("Digite uma opcao\n");
		printf("    1 - para converter de km/h para m/s\n");
		printf("    2 - para converter de m/s para km/h\n");
		printf("    q - para sair\n");
		setbuf(stdin, NULL);
		scanf("%c", &option);
	 
		if(option=='1'){
			printf("Digite a velocidade (km/h): ");
			scanf("%lf", &v);
			printf("A velocidade em ms eh: %.2lf\n\n", v/3.6);
		}
		
		else if(option=='2'){
			printf("Digite a velocidade (m/s): ");
			scanf("%lf", &v);
			printf("A velocidade em km/h eh: %.2lf\n\n", v*3.6);
		}
		
		else if(option=='q'){
			return 0;
		}
		
		else {
			printf("Comando Inválido\n");
		}
	}
	
	
	return 0;
}
