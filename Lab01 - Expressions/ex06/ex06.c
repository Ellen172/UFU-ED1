#include <stdio.h>

int main() {
    printf("<< Loteria >>\n");
    
    double premio;
    printf("Valor total do premio: ");
    scanf("%lf", &premio);
    printf("Primeiro vencedor: %0.lf\n", premio*0.46);
    printf("Segundo vencedor: %0.lf\n", premio*0.32);
    printf("Terceiro vencedor: %0.lf\n", premio*0.22);
}


/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/