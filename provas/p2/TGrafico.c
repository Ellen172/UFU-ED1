#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "TGrafico.h"

struct TGrafico
{
    int qtd;
    struct ponto ptos[MAX];
    char nome_eixo_x[100];
    char nome_eixo_y[100];
    char titulo[100];
};


TGrafico* cria_grafico(){
    TGrafico *li;
    li = malloc (sizeof(TGrafico));
    if(li != NULL){
        li->qtd = 0;
    }
    return li;
}

void apaga_grafico(TGrafico* li){
    free(li);
}

int definir_nomes_eixos(TGrafico* li, char *eixo_x, char *eixo_y){
   strcpy(li->nome_eixo_x, eixo_x);
   strcpy(li->nome_eixo_y, eixo_y);
}

int definir_titulo(TGrafico* li, char *titulo){
    strcpy(li->titulo, titulo);
}

int insere_ponto(TGrafico* li, struct ponto pto, int pos){
    if(li == NULL || li->qtd > MAX)
        return -1;
    if(pos <= li->qtd){
        for(int i=li->qtd; i>=pos; i--){
            li->ptos[i+1] = li->ptos[i];
        }
        li->ptos[pos] = pto;
        li->qtd++;
        return 0;
    }
    struct ponto zero;
    zero.x = 0; 
    zero.y=0;
    for(int i=li->qtd; i<pos; i++){
        li->ptos[pos] = zero;
    }
    li->qtd+=pos;
    li->ptos[pos] = pto;
    return 0;
}

int insere_ponto_fim(TGrafico* li, struct ponto pto){
    if(li==NULL || li->qtd > MAX)
        return -1;
    li->ptos[li->qtd] = pto;
    li->qtd++; 
    return 0;
}

int mostrar_grafico(TGrafico* li){
    if(li == NULL)
        return -1;
    struct ponto *p;
    for(int i=0; i<li->qtd; i++){
        p = li->ptos;
        printf("ponto %d: x=%.2lf, y=%.2lf\n", i, p->x, p->y);
    }
    free(p);
}

// int maior_y(TGrafico* li, float *maior_y, struct ponto pto){
//     for(int i=1; i<=li->qtd; i++){
//         if(i==1)
//             *maior_y = *li.ptos.y;
//     }
// }
