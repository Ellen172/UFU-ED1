#include <stdio.h>
#include <stdlib.h>
#include "ListaCir.h"

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista *create(){
    Lista *li = malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

list_free(Lista *li){
    if(li != NULL && (*li) != NULL) {
        Elem *aux, *no = *li;
        while((*li) != no->prox) {
            aux = no;
            no = no->prox;
            free(aux);
        }
        free(no);
        free(li);
    }
    return SUCCESS;
}

int list_size(Lista *li){
    if(li == NULL || *li == NULL)
        return 0;
    int cont = 0;
    Elem *no = *li;
    while (no != *li){
        cont ++; 
        no = no->prox;
    }
    return cont;
}