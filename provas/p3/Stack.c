#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

Pilha *create_stack(){
    Pilha *st;
    st = malloc(sizeof(Pilha));
    if(st != NULL){
        st->qtd = 0;
    }
    return st;
}

int push(Pilha *st, int num){
    if(st == NULL)
        return ERROR;
    int pos = st->qtd;
    printf("%d\n", pos);
    st->val[pos] = num;
    printf("%d\n", st->val);
    st->qtd++;
    printf("%d\n", st->qtd);
    return SUCCESS;
}

int pop(Pilha *st){
    if(st == NULL)
        return ERROR;
    st->qtd--;
}

int print(Pilha *st){
    if(st == NULL)
        return ERROR;
    for(int i=0; i<st->qtd; i++){
        printf("%d\n", st->val[i]);
    }
    return SUCCESS;
}

free_pilha(st){
    if(st == NULL)
        return ERROR;
    free(st);
    return SUCCESS;
}