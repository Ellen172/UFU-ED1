#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto {
    int x;
    int y;
};

Ponto* cria_ponto(Ponto *p, int x, int y){
    p = malloc(sizeof(Ponto));
    if(p == NULL)
        return NULL;
    else {
        p->x = x;
        p->y = y;
        return p;
    }
}

int acessa_ponto(Ponto *p, int *x, int *y){
    x = malloc(sizeof(int));
    y = malloc(sizeof(int));
    *x = p->x;
    *y = p->y;
    return 0;
}

int atribui_valores(Ponto *p, int x, int y){
    p->x = x;
    p->y = y;
}

float distancia(Ponto *p, Ponto *q){
    float dx, dy;
    dx = p->x - q->x;
    dy = p->y - q->y;
    return sqrt(dx * dx + dy * dy);
}

int libera_ponto(Ponto *p){
    if(p == NULL)
        return -1;
    else 
        free(p);
        return 0;
}
