#include<stdio.h>
#include<math.h>

int main () {
	printf("==Conversor de numeros binarios==\n\n");
	
	int n, bit, bit_inteiro=0, decimal=0, i=1;
	
	printf("Entre com o numero de bits: ");
	scanf("%d", &n);
	n--;
	while(n>=0){
		printf("Digite o %do. bit: ", i);
		scanf("%d", &bit);
		
		bit_inteiro += bit * pow(10,n);
		decimal += bit * pow(2, n);
		
		n--; i++;
	}
		
	printf("O numero binario %d corresponde ao numero decimal %d\n", bit_inteiro, decimal);
	
	return 0;
}
