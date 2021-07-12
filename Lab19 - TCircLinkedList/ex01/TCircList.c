#include "TCircList.h"
#include <stdio.h>
#include <stdlib.h>

struct elemento {
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista *list_create(){
    Lista *li;
    li = malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int list_free(Lista *li){
    if(li == NULL) // lista invalida
        return INVALID_NULL_POINTER;
    if(*li == NULL) // lista vazia
        return OUT_OF_RANGE;
    Elem *aux, *no;
    no = *li; // o no é o primeiro elemento
    while (no->prox != (*li)){
        aux = no;
        no = no->prox;
        free(aux);
    }
    free(no);
    free(li);
    return SUCCESS;
}

int list_size(Lista *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if((*li) == NULL) // lista vazia
        return 0;
    int count=0;
    Elem *no;
    no = *li;
    do {
        count++;
        no = no->prox;
    } while(no != *li);
    return count;
}

int full_list(Lista *li){
    return INVALID_NULL_POINTER; // lista dinamica nunca esta cheia
}

int empty_list(Lista *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if((*li) == NULL)
        return SUCCESS;
    return OUT_OF_MEMORY;
}

int push_front(Lista *li, struct aluno al){
    if(li == NULL) return INVALID_NULL_POINTER;
    Elem *no = malloc(sizeof(Elem));
    if(no == NULL) return OUT_OF_MEMORY;
    no->dados = al;
    if((*li) == NULL){
        *li = no;
        no->prox = no;
    } else {
        Elem *aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = no;
        no->prox = *li;
        *li = no;
    }
    return SUCCESS;
}

int push_back(Lista *li, struct aluno al){
    if(li == NULL) return INVALID_NULL_POINTER;
    Elem *no = malloc(sizeof(Elem));
    if(no == NULL) return OUT_OF_MEMORY;
    no->dados = al;
    if((*li) == NULL){
        *li = no;
        no->prox = no;
    } else {
        Elem *aux = *li;
        while(aux->prox != *li){
            aux = aux->prox;
        }
        aux->prox = no;
        no->prox = *li;
    }
    return SUCCESS;
}

int push_ord(Lista *li, struct aluno al){
    if(li == NULL) return INVALID_NULL_POINTER;
    Elem *no = malloc(sizeof(Elem));
    if(no == NULL) return OUT_OF_MEMORY;
    no->dados = al;
    if((*li) == NULL){
        *li = no;
        no->prox = no;
    } else {
        if((*li)->dados.matricula > al.matricula){
            Elem *atual = *li;
            while (atual->prox != *li)
            {
                atual = atual->prox;
            }
            no->prox = *li;
            atual->prox = no;
            *li = no;
            return SUCCESS;            
        } else {
            Elem *ant = *li; 
            Elem *atual = (*li)->prox;
            while(atual != (*li) && atual->dados.matricula < al.matricula){
                ant = atual;
                atual = atual->prox;
            }
            ant->prox = no;
            no->prox = atual;
            return SUCCESS;
        }

    }
}