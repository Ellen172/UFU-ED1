#include <stdio.h>

//erro na resposta (verificar ex08)

void incp(double y, double x, double *p){
    x = x*y;
    *p += x;
}

int main(){
    double y, x;
    double *p;

    printf("Digite o valor de y: ");
    scanf("%lf", &y);
    printf("Digite o percentual de alteracao x: ");
    scanf("%lf", &x);

    p=&y;

    incp(y,x,p);

    printf("O valor alterado eh: %0.lf\n", *p);

    return 0;
}

/*
=> Faça uma função que altere um valor de um número real em x%. 
Se o valor de x for negativo ele deve ser decrementado, se for
positivo aumente. O valor da variável deve ser passada por parâmetro,
ou seja, o retorno deve  ser void.


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