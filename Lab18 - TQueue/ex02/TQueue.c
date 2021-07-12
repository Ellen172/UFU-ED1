#include "TQueue.h"
#include <stdio.h>
#include <stdlib.h>

struct NDQueue
{
    struct aluno data;
    struct NDQueue *next;
};
struct Queue 
{
    int qtd;
    struct NDQueue *head;
    struct NDQueue *end;
};

typedef struct NDQueue NDQueue;

TQueue *create_queue(){
    TQueue *fila;
    fila = malloc(sizeof(TQueue));
    if(fila != NULL){
        fila->head = NULL;
        fila->end = NULL;
        fila->qtd = 0;
    }
    return fila;
}

int free_queue(TQueue *fila){
    if(fila == NULL)
        return INVALID_NULL_POINTER;
    NDQueue *node, *aux;
    node = fila->head;
    aux = NULL;
    while(node != NULL){
        aux = node;
        node = node->next;
        free(aux);
    }
    free(fila);
    return SUCCESS;
}

int queue_push(TQueue *fila, struct aluno al){
    if(fila == NULL)
        return INVALID_NULL_POINTER;
    if(fila->qtd == MAX)
        return OUT_OF_RANGE;
    NDQueue *node;
    node = malloc(sizeof(NDQueue));
    node->data = al; // armazena os dados em um no
    node->next = NULL; // o proximo depois do nó será null
    if(fila->head == NULL){
        fila->head = node; // o primeiro elemento será o node se não houver elemento na fila, ele será o primeiro e ultimo
    }
    if(fila->end != NULL){
        fila->end->next = node; // o proximo depois do ultimo será esse no
    }
    fila->end = node; // o end passa a apontar para o nó
    fila->qtd++; // aumentando a qtd de elemento
    return SUCCESS;
}

int queue_pop(TQueue *fila){
    if(fila == NULL)
        return INVALID_NULL_POINTER;
    if(fila->qtd == 0)
        return OUT_OF_RANGE;

    if(fila->head->next == NULL){
        free(fila->head); // libera a 1ª e unica posição 
        fila->end = NULL; // se não houver 1ª elemento não haverá um ultimo
    } else {
        NDQueue *node; // cria um no auxiliar
        node = malloc(sizeof(NDQueue));
        node = fila->head->next; // aloca o no na 2ª posição
        free(fila->head); // libera a 1ª posição 
        fila->head = node; // aponta o head para a 2ª posição, que passará a ser a 1ª
    }
    fila->qtd--; // diminui a qtd de elementos
    return SUCCESS;
}

int queue_consult(TQueue *fila, struct aluno *al){
    if(fila == NULL)
        return INVALID_NULL_POINTER;
    if(fila->qtd == 0)
        return OUT_OF_RANGE;
    *al = fila->head->data;
    return SUCCESS;
}