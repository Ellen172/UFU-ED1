#include <stdio.h>

int main() {
    printf("<< Conversor Temperatura>>\n\n");
    
	int u;
	double t1, t2;
    
	printf("Digite a temperatura: ");
    scanf("%lf", &t1);
    printf("Digite a unidade: ");
    scanf("%s", &u);
    
    if(u=='c' || u=='C'){
    	t2 = (t1 * 1.8) + 32;
    	printf("%0.lf graus Celsius equivale a %0.lf graus Fahrenheit\n", t1, t2);
	}
	else if(u=='f' || u=='F'){
		t2 = (t1-32) /1.8;
		printf("%0.lf graus Fahrenheit equivale a %0.lf graus Celsius\n", t1, t2);
	}
	else {
		printf("Unidade de medida nao encontrado\n");
	}
    
    return 0;
}
