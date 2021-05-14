#include <stdio.h>

int main() {
    printf("<< Pagamento encanador >>\n");
    
    int dias;
    double bruto, iss, ir;
    
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    bruto = dias*30;
    printf("Valor bruto R$: %.0lf\n", bruto);
    iss = bruto * 0.04;
    ir = bruto * 0.08;
    printf("Valor liquido R$: %.0lf\n", bruto - iss - ir);
    printf("ISS R$: %.0lf\n", iss);
    printf("IR R$: %.0lf\n", ir);
    
    return 0;
}


/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/