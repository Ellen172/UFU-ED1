#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

struct pilha {
    int qtd;
    struct caracter dados[MAX];
};

Pilha *stack_create(){
    Pilha *pi; 
    pi = malloc(sizeof(Pilha));
    if(pi != NULL){
        pi->qtd = 0;
    }
    return pi;
}

int stack_free(Pilha *pi){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    free(pi);
    return SUCCESS;
}

int stack_size(Pilha *pi){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    return pi->qtd;
}

int stack_full(Pilha *pi){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    if(pi->qtd == MAX)
        return SUCCESS;
    return OUT_OF_RANGE;
}

int stack_empty(Pilha *pi){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    if(pi->qtd == 0)
        return SUCCESS;
    return OUT_OF_RANGE;
}

int stack_push(Pilha *pi, struct caracter *c){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    if(pi->qtd == MAX)
        return OUT_OF_RANGE;
    pi->dados[pi->qtd] = *c;
    pi->qtd++;
    return SUCCESS;
}

int stack_pop(Pilha *pi){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    if(pi->qtd < 1)
        return OUT_OF_RANGE;
    pi->qtd--;
    return SUCCESS;
}

int stack_consult(Pilha *pi, struct caracter *c){
    if(pi == NULL)
        return INVALID_POINTER_NULL;
    if(pi->qtd == 0)
        return OUT_OF_RANGE;
    *c = pi->dados[pi->qtd-1];
    return SUCCESS;
}