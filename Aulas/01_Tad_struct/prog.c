#include <stdio.h>
#include "ponto.h"

int main(){
    printf("Hello!\n");

    Ponto *p, *q;

    p = cria_ponto(p, 2, 3);
    q = cria_ponto(q, 4, 6);
    printf("cria ponto\n");

    int *px, *py; // referenciadores dos pontos x e de p
    acessa_ponto(p, px, py); // função que referencia os ponteiros
    printf("acessa ponto\n");

    atribui_valores(q, 3, 7);
    printf("atribui valor\n");

    float res = distancia(p, q);
    printf("res = %.2lf\n", res);

    libera_ponto(p);
    libera_ponto(q);
    printf("libera ponto\n");

    return 0;
}