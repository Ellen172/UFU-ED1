#include <stdio.h>

//as respostas DO PROF estão 0.2 de 1320 = 1320*20 = 26400+1320 = 27720
//as MINHAS respostas estão 0.2 de 1320 = 1320*0.20 = 264+1320 = 1584

double incp(double y, double x){
    x = x*y;
    y+=x;
    return y;
}

int main(){
    double y, x, resp;

    printf("Digite o valor de y: ");
    scanf("%lf", &y);
    printf("Digite o percentual de alteracao x: ");
    scanf("%lf", &x);

    resp = incp(y,x);

    printf("O valor alterado eh: %0.lf\n", resp);

    return 0;
}

/*
=> Faça uma função que altere um valor de um número real em x%. Se 
o valor de x for negativo ele deve ser decrementado, se for positivo 
aumente.

Uso da função: 
x = incp(y,10);
z = incp(y,-20);

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de y: 100
Digite o percentual de alteracao: 0.10 // 0.10 equivale a 10%
O valor alterado eh: 110
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de y: -100
Digite o percentual de alteração: .10
O valor alterado eh: -110
-------------------------------------------------------------------------------
*/