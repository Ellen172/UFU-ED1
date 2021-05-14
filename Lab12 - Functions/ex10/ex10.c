#include <stdio.h>

struct ponto {
    int x, y;
};

imprime_ponto(struct ponto p){
    printf("O ponto digitado eh: (%d,%d)\n", p.x, p.y);
}

int main(){
    struct ponto p;
    char temp[50];

    printf("Digite o valor de x: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &p.x);
    printf("Digite o valor de y: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &p.y);

    imprime_ponto(p);

    return 0;
}

/*
Observação: Para os próximos exercícios, crie uma struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função chamada imprime_ponto, que recebe uma 
struct do tipo ponto e mostra na tela o ponto no seguinte formato 
(ponto.x, ponto.y)

Exemplo de chamada da função:
imprime_ponto(p)

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 10
Digite o valor de y: 5
O ponto digitado eh: (10,5)
-------------------------------------------------------------------------------
*/