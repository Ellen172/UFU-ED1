#include<stdio.h>

int main() {
	printf("<<Comissao>>\n\n");
	
	double venda;
	
	printf("Entre com o valor total de suas vendas: ");
	scanf("%lf", &venda);
	
	if(venda >= 100000){
		printf("Sua comissao foi de R$700.00 + 16%%\nValor final = %.2lf\n", (venda*0.16)+700);
	}
	else if(venda >= 80000){
		printf("Sua comissao foi de R$650.00 + 14%%\nValor final = %.2lf\n", (venda*0.14)+650);
	}
	else if(venda >= 60000){
		printf("Sua comissao foi de R$600.00 + 14%%\nValor final = %.2lf\n", (venda*0.14)+600);
	}
	else if(venda >= 40000){
		printf("Sua comissao foi de R$550.00 + 14%%\nValor final = %.2lf\n", (venda*0.14)+550);
	}
	else if(venda >=20000){
		printf("Sua comissao foi de R$500.00 + 14%%\nValor final = %.2lf\n", (venda*0.14)+500);
	}
	else {
		printf("Sua comissao foi de R$400.00 + 14%%\nValor final = %.2lf\n", (venda*0.14)+400);
	}
	
	return 0;
}
