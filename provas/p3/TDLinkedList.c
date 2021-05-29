#include <stdlib.h>
#include <stdio.h>
#include "TDLinkedList.h"

typedef struct DLNode DLNode;

struct DLNode {
    struct aluno data;
    DLNode *prev;
    DLNode *next;
};

struct TDLinkedList {
    DLNode *begin;
    DLNode *end;
    int size;
};

TDLinkedList *list_create() {
    TDLinkedList *list;
    list = malloc(sizeof(TDLinkedList));
    if (list != NULL)
    {
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
    }
    return list;
}

int list_free(TDLinkedList *li) {
    if(li == NULL)
        return INVALID_NULL_POINTER;
    DLNode *node;
    node = li->begin;
    while (node != NULL) {
        li->begin = node->next;
        free(node);
        node = li->begin;
    }
    return SUCCESS;    
}

int list_push_front(TDLinkedList *li, struct aluno al) {
    if (li == NULL)
        return INVALID_NULL_POINTER;

    DLNode *node;
    node = malloc(sizeof(DLNode));
    if (node == NULL)
        return OUT_OF_MEMORY;

    node->data = al;
    node->prev = NULL;
    node->next = li->begin;

    if (li->begin == NULL)
    { // a lista está vazia
        li->begin = node;
        li->end = node;
        li->size = 1;
    }
    else
    { // a lista possui um nó
        li->begin->prev = node;
        li->begin = node;
        li->size++;
    }
    return SUCCESS;
}

int list_push_back(TDLinkedList *li, struct aluno al){
    if (li == NULL)
        return INVALID_NULL_POINTER;
    DLNode *node;
    node = malloc(sizeof(DLNode));
    if(node == NULL)
        return OUT_OF_MEMORY;
    node->data = al;
    node->next = NULL;
    node->prev = li->end;
    if(li->begin == NULL){
        li->begin = node;
        li->end = node;
    } else {
        li->end->next = node;
        li->end = node;
    }
    li->size++;
    return SUCCESS;
}

int list_insert(TDLinkedList *li, int pos, struct aluno al) {
    if (li == NULL)
        return INVALID_NULL_POINTER;
    // teste se a posição de inserção é válida
    if ((pos < 1) || (pos > li->size + 1))
        return OUT_OF_RANGE;

    DLNode *node;
    node = malloc(sizeof(DLNode));
    if (node == NULL)
        return OUT_OF_MEMORY;
    node->data = al;

    
    if (li->size == 0)
    { // a lista está vazia
        node->next = NULL;
        node->prev = NULL;
        li->begin = node;
        li->end = node;
        li->size = 1;
    }
    else if (pos == 1)
    { //insere no início da lista
        node->prev = NULL;
        node->next = li->begin;
        li->begin->prev = node;
        li->begin = node;
        li->size = li->size + 1;
    }
    else if (pos == li->size + 1)
    { // inserção no fim da lista
        node->next = NULL;
        node->prev = li->end;
        li->end->next = node;
        li->end = node;
        li->size++;
    }
    else
    {
        int cont;
        DLNode *aux;

        cont = 1;
        aux = li->begin;
        while (cont < pos - 1)
        {
            aux = aux->next;
            cont = cont + 1;
        }
        node->prev = aux;
        node->next = aux->next;
        aux->next->prev = node;
        aux->next = node;
        li->size++;
    }
    return SUCCESS;
}

int list_size(TDLinkedList *li) {
    if(li == NULL){
        return INVALID_NULL_POINTER;
    } else {
        return li->size;
    }
}

int list_pop_front(TDLinkedList *li) {
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if(li->begin == NULL)
        return OUT_OF_RANGE;
    DLNode *node;
    node = li->begin;
    li->begin = node->next;
    if(li->begin != NULL){
        li->begin->prev = NULL;
    } else {
        li->end = NULL;
    }
    free(node);
    li->size--;
    return SUCCESS;    
}

int list_pop_back(TDLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if(li->end == NULL)
        return OUT_OF_RANGE;
    DLNode *node; 
    node = li->end;
    li->end = node->prev;
    if(li->end != NULL){
        li->end->next = NULL;
    } else {
        li->begin = NULL;
    }
    free(node);
    li->size--;
    return SUCCESS;
}

int list_erase(TDLinkedList *li, int pos ){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if(pos < 0 || pos > li->size)
        return OUT_OF_RANGE;
    int c = 1;
    DLNode *node;
    node = li->begin;
    while(c < pos && node != NULL){
        node = node->next;
        c++;
    }
    if(node == li->begin){
        li->begin = node->next;
        if(node->next == NULL){
            li->end = NULL;
        } else {
            node->next->prev = NULL;
        }
    } else {
        node->prev->next = node->next;
        if(node == li->end){
            li->end = node->prev;
        } else {
            node->next->prev = node->prev;
        }
    }
    free(node);
    return SUCCESS;
}

int list_find_pos(TDLinkedList *li, int pos, struct aluno *al); 

int list_find_mat(TDLinkedList *li, int nmat, struct aluno *al);   

int list_front(TDLinkedList *li, struct aluno *al); 

int list_back(TDLinkedList *li, struct aluno *al); 

int list_get_pos(TDLinkedList *li, int nmat , int *pos); 

int list_print_forward(TDLinkedList *li) {
    if (li == NULL)
        return INVALID_NULL_POINTER;
    DLNode *aux;
    aux = li->begin;
    printf("\nImprimindo a lista\n");

    while (aux != NULL)
    {
        printf("\n------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

        aux = aux->next;
    }
    printf("\nFim da lista \n");
}

int list_print_reverse(TDLinkedList *list) {
    if (list == NULL)
        return INVALID_NULL_POINTER;
    DLNode *aux;
    aux = list->end;
    printf("\nImprimindo a lista - reverso\n");

    while (aux != NULL)
    {
        printf("\n------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

        aux = aux->prev;
    }
    printf("\nFim da lista \n");
}

// prova 03
int list_erase_pares(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    DLNode *node;
    node = list->begin;
    while(node != NULL){
        if(node->data.matricula %2 == 0){
            if(list->size == 1){
                list->begin = NULL;
                list->end = NULL;
            } else if(node == list->begin){
                list->begin = node->next;
                node->next->prev = NULL;
            } else if(node == list->end){
                list->end = node->prev;
                node->prev->next = NULL;
            } else {
                node->prev->next = node->next;
                node->next->prev = node->next;
            }
            free(node);
        }
        node = node->next;
    }
    return SUCCESS;
}

int list_splice(TDLinkedList *dest, TDLinkedList *source, int pos){
    if(dest == NULL)
        return INVALID_NULL_POINTER;
    if(source == NULL)
        return OUT_OF_MEMORY;
    if(pos < 0 || pos > dest->size+1)
        return OUT_OF_RANGE;
    DLNode *node;
    node = dest->begin;
    int c = 1;
    if (pos > dest->size){
        dest->end->next = source->begin;
        dest->end = source->end;
    } else if (dest->size == 0){
        dest->begin = source->begin;
        dest->end = source->end;
    } else {
        while (c < pos && node != NULL) {
            node = node->next;
            c++;
        }
        if(node == dest->begin){
            dest->begin = source->begin;
        } else {
            node->prev->next = source->begin;
        }
        source->end->next = node;
    }
    dest->size += source->size;
    return SUCCESS;
}