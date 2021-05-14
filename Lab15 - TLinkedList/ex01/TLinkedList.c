#include <stdlib.h>
#include <stdio.h>
#include "TLinkedList.h"

typedef struct list_node list_node;
struct list_node
{
    struct aluno data;
    list_node *next;
};
struct TLinkedList
{
    list_node *head;
};

TLinkedList *list_create() {
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}

int list_free(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;

        aux = list->head;
        while (aux != NULL)
        {
            list->head = aux->next;
            free(aux);
            aux = list->head;
        }
        free(aux);

        // segunda forma
        // while (list->head != NULL)
        // {
        //     aux = list->head;
        //     list->head = list->head->next;
        //     free(aux);
        // }
        free(list);
        return SUCCESS;
    }
}

int list_push_front(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->head;
        list->head = node;

        return SUCCESS;
    }
}

int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
            return OUT_OF_MEMORY;
        node->data = al;
        node->next = NULL;
        if (list->head == NULL)
        { // a lista está vazia
            list->head = node;
        }
        else
        { // a lista tem pelo menos um nó
            list_node *aux;
            aux = list->head;
            while (aux->next != NULL)
            {
                aux = aux->next;
            }
            aux->next = node;
        }
        return SUCCESS;
    }
}

int list_insert_sorted(TLinkedList *list, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    list_node *node;
    node = malloc(sizeof(list_node));
    if(node ==  NULL)
        return OUT_OF_MEMORY;
    node->data = al; 
    list_node *aux, *prev;
    aux = list->head;
    prev = NULL; // não há elemento antes do head
    while((aux != NULL) && (node->data.matricula > aux->data.matricula)){ 
        // verifica se o aux é nulo (se já houver testado todos os elementos da lista)
        // verifica se a matricula de node é maior que a de aux
        prev = aux; // anterior se torna o valor de aux
        aux = aux->next; // o aux se torna o proximo elemento da lista
    }
    if(prev == NULL ) { // se não tiver um prev (não entrar no while)
    // ou if (aux == list->begin)  // se o aux for o primeiro elemento 
        node->next = aux; 
        list->head = node; // o primeiro elemento será node 
    } else {
        prev->next = node; // o anterior (menor que node) aponta para node
        node->next = aux; // o proximo de node aponta para o aux (maior que node)
    }
    return SUCCESS;
}

int list_size(TLinkedList *list){
    if (list == NULL){
        return INVALID_NULL_POINTER;
    } else {
        int contador = 0;
        list_node *aux;
        aux = list->head;
        while (aux != NULL)
        {
            aux = aux->next;
            contador = contador + 1;
        }
        return contador;
    }
}

int list_pop_front(TLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    list_node *node;
    node = list->head;
    if(node == NULL)
        ELEM_NOT_FOUND;
    list->head = node->next;
    free(node);
    return SUCCESS;
}

int list_pop_back(TLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    list_node *node, *aux;
    node = list->head;
    aux == NULL;
    if(node == NULL){
        return ELEM_NOT_FOUND; // não há elemento para retirar
    }
    while (node->next != NULL) {
        aux = node;
        node = node->next;
    } 
    if(node == list->head){
        free(node);
        list->head = NULL;
    } else {
        free(node);
        aux->next = NULL;
    }
    return SUCCESS;
}

int list_erase(TLinkedList *list, int pos){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    list_node *node, *aux;
    node = list->head;
    aux = NULL;
    int c=1;
    while (node != NULL && c <= pos){
        if(c == pos){
            if(node == list->head){
                list->head = node->next;
                free(node);
            } else {
                aux->next = node->next;
                free(node);
            }
        } else {
            node = node->next;
            aux = node;
        }
        c++;
    }

    if(c < pos){
        return OUT_OF_RANGE;    
    } else {
        return SUCCESS;
    }
    
}

int list_print(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;
        printf("\nImprimindo a lista (tamanho %d)\n", list_size(list));

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
}