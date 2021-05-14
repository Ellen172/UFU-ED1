#include <stdio.h>

struct ponto {
    int x, y;
};

void imprime_ponto(struct ponto a, struct ponto b, struct ponto c){
    printf("A soma de (%d,%d) com (%d,%d) eh (%d,%d)\n", a.x, a.y, b.x, b.y, c.x, c.y);
}

struct ponto soma_pontos(struct ponto a, struct ponto b){
    struct ponto soma;
    soma.x = a.x + b.x;
    soma.y = a.y + b.y;

    return soma;
}

int main(){
    struct ponto a, b, c;

    char temp[50];

    printf("Digite o valor de x1: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &a.x);
    printf("Digite o valor de y1: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &a.y);
    printf("Digite o valor de x2: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &b.x);
    printf("Digite o valor de y2: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%d", &b.y);

    c = soma_pontos(a, b);
    imprime_ponto(a, b, c);

    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faca uma função que some dois pontos e retorne o resultado 
da soma. Mostre os 3 pontos usando a função imprime_ponto.

Exemplo:
ponto p1, p2, p3;
p3= soma_ponto(p1,p2);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/