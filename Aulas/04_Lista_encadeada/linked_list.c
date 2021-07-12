#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct listNode listNode;

struct listNode {
    struct aluno data; // dados do nó
    listNode *next; // o ponteiro apontará para o proximo nó da lista
};

struct linkedList {
    listNode *head; // ponteiro para a lista de nós
};

// função cria lista
// retorna a lista alocada
linkedList *list_create(){
    linkedList *list;
    list = malloc(sizeof(linkedList));
    if(list != NULL){
        list->head = NULL; // o elemento listNode apontado por head será nulo
        // o primeiro nó ainda não existirá, apenas o ponteiro que para ele aponta
    }
    return list;
}

int list_push_front(linkedList *list, struct aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    } else {
        listNode *node; // ponteiro para alocar o node na memória heap
        node = malloc(sizeof(listNode)); // aloca a qtd necessária n amemória
        if(node == NULL){
            return OUT_OF_MEMORY; // não consegue alocar o node
        }
        node->data = al; // alocar a struct aluno al no nó da lista (solto da lista)
        
        // if(list->head == NULL){ // se o head não estiver apontando para nenhum nó..
        //     node->next = list->head; // o proximo nó será nulo 
        // } else { // head apontando para outro nó .. 
        //     node->next = list->head; // o nó alocado aponta para o atual nó cabeça (apontado por list->head)
        // }
        node->next = list->head;

        list->head = node; // o head da lista aponta para o node recém criado
        return SUCCESS;
    }
}

int list_push_back(linkedList *list, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    listNode *node;
    node = malloc(sizeof(listNode)); // alocando node
    if(node == NULL) // verificando se node foi alocado
        return OUT_OF_MEMORY;
    node->data = al; // o node receberá a struct al
    node->next = NULL; // o ultimo elemento tem next = nulo
    if(list->head == NULL){ // se o head não aponta para nada (lista vazia)...
        list->head = node; // head apontará para o elemento criado
    } else { // lista que possui ao menos um nó
        listNode *aux;
        aux = list->head; // aux se inicia no head
        while(aux->next != NULL){ // se o proximo não for nulo..
            aux = aux->next; // aux recebe o proximo elemento da lista
        }
        aux->next = node; // o proximo elemento (que seria nulo) apontara para o nó criado
    }
    return SUCCESS;
}

int list_print(linkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    listNode *aux;
    aux = list->head; // aux aponta para o primeiro elemento da lista
    
    while(aux != NULL){
        printf("\n---------------------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %f, %f, %f\n", aux->data.n1, aux->data.n2, aux->data.n3);

        aux = aux->next; // o auxiliar recebe o endereço do proximo nó
    }
    return SUCCESS;
}

int list_free(linkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    listNode *aux;
    // solução 1
    aux = list->head;
    while(aux != NULL)
    {
        list->head = aux->next; // o head apontará para o proximo elemento
        free(aux); // o primeiro elemento será apagado
        aux = list->head; // dá o novo head para o aux
    }

    // solução 2
    // while (list->head != NULL)
    // {
    //     list->head = aux->next;
    //     free(aux);
    //     aux = list->head;
    // }
    
    // solução 3
    // while (list->head != NULL)
    // {
    //     aux = list->head;
    //     list->head = list->head->next;
    //     free(aux);
    // }
    
    free(list); // apaga a lista
    return SUCCESS;
}

int list_size(linkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    int contagem=0;
    listNode *aux;
    aux = list->head;
    while(aux != NULL){
        aux = aux->next;
        contagem ++;
    }
    return contagem;
}