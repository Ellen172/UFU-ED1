#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

int main(){
    linkedList *list;
    struct aluno a, b, c, d;

    strcpy(a.nome, "Ellen");
    a.matricula = 12011;
    a.n1 = 4; a.n2 = 6; a.n3 = 5; 
    strcpy(b.nome, "Bruno");
    b.matricula = 25133;
    b.n1 = 5; b.n2 = 9; b.n3 = 2;
    strcpy(c.nome, "Catia");
    c.matricula = 65421;
    c.n1 = 8; c.n2 = 1; c.n3 = 7;
    strcpy(d.nome, "Sofia");
    d.matricula = 65421;
    d.n1 = 8; d.n2 = 1; d.n3 = 7;

    list = list_create();
    if(list == NULL){ // se o ponteiro list é nulo
        printf("ERROR!\n");
        exit(1); // encerra o programa
    }

    int ret;
    ret = list_push_front(list, a); // inserindo aluno a na frente da lista
    printf("A = ");
    if(ret == INVALID_NULL_POINTER){
        printf("Erro de ponteiro\n");
    } else if(ret == OUT_OF_MEMORY){
        printf("Memoria insuficiente\n");
    } else if(ret == SUCCESS){
        printf("Aluno inserido\n");
    }
    ret = list_push_front(list, b); // inserindo aluno b na frente da lista (antes de a)
    printf("B = ");
    if(ret == INVALID_NULL_POINTER){
        printf("Erro de ponteiro\n");
    } else if(ret == OUT_OF_MEMORY){
        printf("Memoria insuficiente\n");
    } else if(ret == SUCCESS){
        printf("Aluno inserido\n");
    }
    ret = list_push_front(list, c); // inserindo aluno c na frente da lista (antes de a e de b)
    printf("C = ");
    if(ret == INVALID_NULL_POINTER){
        printf("Erro de ponteiro\n");
    } else if(ret == OUT_OF_MEMORY){
        printf("Memoria insuficiente\n");
    } else if(ret == SUCCESS){
        printf("Aluno inserido\n");
    }

    ret = list_push_back(list, d); // inserindo aluno d no final da lista
    if(ret == INVALID_NULL_POINTER){
        printf("Erro de ponteiro\n");
    } else if(ret == OUT_OF_MEMORY){
        printf("Memoria insuficiente\n");
    } else if(ret == SUCCESS){
        printf("Aluno inserido\n");
    }

    list_print(list); // printando elementos da lista
    int tam = list_size(list); 
    printf("Tamanho da lista = %d\n", tam);

    ret = list_free(list);
    if(ret == SUCCESS){
        printf("Memoria liberada\n");
    }
    list = NULL;

    return 0;
}