#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

typedef struct node Node;
struct node {
    struct aluno data; // dados do nó
    Node *prev; // aponta para o nó anterior
    Node *prox; // aponta para o proximo nó 
};

// nó descritor da lista;
struct lista {
    Node *begin; // aponta para o primeiro elemento da lista
    Node *end; // aponta para o ultimo elemento da lista
    int size; // define o quantidade de elementos
};

Lista *list_create(){
    Lista *list;
    list = malloc(sizeof(Lista));
    if(list != NULL){
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
    }
    return list;
}

int list_push_front(Lista *list, struct aluno al){
    if (list == NULL)
        return INVALID_NULL_POINTER;
    Node *node;
    node = malloc (sizeof(Node));
    if(node = NULL)
        return OUT_OF_MEMORY;
    node->data = al; // add os valores de aluno em um nó
    node->prev = NULL; // o elemento anterior será nulo, já que o elemento está sendo inserido no começo
    node->prox = list->begin; // o proximo elemento será o que antes era o primeiro
    
    if(list->begin == NULL){ // lista vazia
        list->end = node; // o ultimo elemento será o node
        list->begin = node; // o primeiro elemento será o node
        list->size ++; // aumenta o tamanho da lista
    } else { // lista que já possui ao menos um elemento
        list->begin->prev = node; // o prev do primeiro elemento passa a apontar para o node
        list->begin = node; // o primeiro elemento passa a ser o node 
        list->size ++; // aumenta o tamanho da lista
    }
    return SUCCESS;
}