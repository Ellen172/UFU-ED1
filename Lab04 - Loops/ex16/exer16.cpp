#include<stdio.h>
#include <math.h>

int main() {
	double base=2, exp=2;
	double pow(double x, double y);
	
	while(exp<=128){
		printf("Com %.0f bits eh possivel enderecar %.0f posicoes de memoria\n", exp, pow( base,  exp) );	
		
		exp*=2;
	}
	

}
