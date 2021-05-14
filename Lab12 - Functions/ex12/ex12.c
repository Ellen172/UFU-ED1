#include <stdio.h>

struct ponto {
    int x, y;
};

void imprime_ponto(struct ponto a, struct ponto b, struct ponto c){
    printf("A soma de (%d,%d) com (%d,%d) eh (%d,%d)\n", a.x, a.y, b.x, b.y, c.x, c.y);
}

void soma_pontos(struct ponto a, struct ponto b, struct ponto *c){
    int somaX, somaY;
    somaX = a.x + b.x;
    somaY = a.y + b.y;

    c->x = somaX;
    c->y = somaY;
}

int main(){
    struct ponto a, b;
    struct ponto *c;

    c = (int *)malloc(sizeof(struct ponto));

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

    soma_pontos(a, b, c);
    imprime_ponto(a, b, *c);

    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Crie um procedimento idêntico ao exercício anterior, mas que 
agora retorne void e coloque o resultado da soma no terceiro 
argumento da função.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/