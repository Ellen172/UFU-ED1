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
    ir = (bruto - iss) * 0.08;
    printf("Valor liquido R$: %.2lf\n", bruto - iss - ir);
    printf("ISS R$: %.0lf\n", iss);
    printf("IR R$: %.2lf\n", ir);
    
    return 0;
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/