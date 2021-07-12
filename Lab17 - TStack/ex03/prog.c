#include "stack.h"
#include <stdio.h>

int main()
{
    int ret;
    struct caracter *x;
    x = malloc(sizeof(struct caracter));
    struct caracter *a, *b, *c;
    a = malloc(sizeof(struct caracter));
    b = malloc(sizeof(struct caracter));
    c = malloc(sizeof(struct caracter));
    a->c = 'a'; b->c = 'g'; c->c = 'r';

    // criando pilha
    Pilha *pi;
    pi = stack_create();
    if(pi == NULL){
        printf("\nErro na alocacao!\n");
    } else {
        printf("\nPilha alocada com sucesso!\n");
    }

    // inserindo a
    ret = stack_push(pi, a);
    if(ret == SUCCESS){
        printf("\nElemento inserido na pilha!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nSem espaco na pilha!\n");
    } else {
        printf("\nErro!\n");
    }
    // verificando ultimo elemento da pilha
    ret = stack_consult(pi, x);
    if(ret == SUCCESS){
        printf("O ultimo elemento eh %c\n", x->c);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento!\n");
    } else {
        printf("Erro!\n");
    }

    // inserindo b
    ret = stack_push(pi, b);
    if(ret == SUCCESS){
        printf("\nElemento inserido na pilha!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nSem espaco na pilha!\n");
    } else {
        printf("\nErro!\n");
    }
    // verificando ultimo elemento da pilha
    ret = stack_consult(pi, x);
    if(ret == SUCCESS){
        printf("O ultimo elemento eh %c\n", x->c);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento!\n");
    } else {
        printf("Erro!\n");
    }

    //inserindo c
    ret = stack_push(pi, c);
    if(ret == SUCCESS){
        printf("\nElemento inserido na pilha!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nSem espaco na pilha!\n");
    } else {
        printf("\nErro!\n");
    }
    // verificando ultimo elemento da pilha
    ret = stack_consult(pi, x);
    if(ret == SUCCESS){
        printf("O ultimo elemento eh %c\n", x->c);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento!\n");
    } else {
        printf("Erro!\n");
    }

    // removendo elemento
    ret = stack_pop(pi);
    if(ret == SUCCESS){
        printf("\nElemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nNao ha elemento para remover!\n");
    } else {
        printf("\nErro!\n");
    }
    // verificando ultimo elemento da pilha
    ret = stack_consult(pi, x);
    if(ret == SUCCESS){
        printf("O ultimo elemento eh %c\n", x->c);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento!\n");
    } else {
        printf("Erro!\n");
    }

    // removendo elemento
    ret = stack_pop(pi);
    if(ret == SUCCESS){
        printf("\nElemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nNao ha elemento para remover!\n");
    } else {
        printf("\nErro!\n");
    }
    // verificando ultimo elemento da pilha
    ret = stack_consult(pi, x);
    if(ret == SUCCESS){
        printf("O ultimo elemento eh %c\n", x->c);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento!\n");
    } else {
        printf("Erro!\n");
    }

    // removendo elemento
    ret = stack_pop(pi);
    if(ret == SUCCESS){
        printf("\nElemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nNao ha elemento para remover!\n");
    } else {
        printf("\nErro!\n");
    }
    // verificando ultimo elemento da pilha
    ret = stack_consult(pi, x);
    if(ret == SUCCESS){
        printf("O ultimo elemento eh %c\n", x->c);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento!\n");
    } else {
        printf("Erro!\n");
    }

    // verificando tamanho da pilha
    int size;
    size = stack_size(pi);
    if(size < 0){
        printf("\nErro!\n");
    } else {
        printf("\nO tamanho da pilha eh %d \n", size);
    }

    // verificando se a pilha esta cheia
    ret = stack_full(pi);
    if(ret == SUCCESS){
        printf("\nLista cheia!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nA lista nao esta cheia!\n");
    } else {
        printf("\nErro!\n");
    }

    // verificando se a pilha esta vazia
    ret = stack_empty(pi);
    if(ret == SUCCESS){
        printf("\nLista vazia!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nA lista nao esta vazia!\n");
    } else {
        printf("\nErro!\n");
    }

    // liberando a pilha
    ret = stack_free(pi);
    if(ret == SUCCESS){
        printf("\nPilha liberada com sucesso!\n");
    } else {
        printf("\nErro de liberacao!\n");
    }

    return 0;
}