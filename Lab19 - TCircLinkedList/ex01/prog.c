#include "TCircList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ret;
    struct aluno al1, al2, al3;
    al1.matricula = 123;
    strcpy(al1.nome, "Joao");
    al1.n1 = 34.5; al1.n2 = 94.3; al1.n3 = 83.5;
    al2.matricula = 234;
    strcpy(al2.nome, "Ana");
    al2.n1 = 45.5; al2.n2 = 47.3; al2.n3 = 97.5;
    al3.matricula = 045;
    strcpy(al3.nome, "Caio");
    al3.n1 = 67.5; al3.n2 = 23.3; al3.n3 = 87.5;

    // criando lista
    Lista *li;
    li = list_create();
    if(li == NULL){
        printf("\nErro ao criar a lista!\n");
        system("pause");
        exit(1);
    } else {
        printf("\nLista criada!\n");
    }

    // insere no inicio
    ret = push_front(li, al1);
    if(ret == SUCCESS){
        printf("\nAluno inserido!\n");
    } else {
        printf("\nErro ao inserir aluno!\n");
    }

    // insere no final
    ret = push_back(li, al2);
    if(ret == SUCCESS){
        printf("\nAluno inserido!\n");
    } else {
        printf("\nErro ao inserir aluno!\n");
    }

    // insere ordenado
    ret = push_ord(li, al3);
    if(ret == SUCCESS){
        printf("\nAluno inserido!\n");
    } else {
        printf("\nErro ao inserir aluno!\n");
    }

    // tamanho da lista
    int tam = list_size(li);
    if(tam < 0){
        printf("\nErro ao definir tamanho da lista!\n");
    } else {
        printf("\nO tamanho da lista e %d\n", tam);
    }

    // lista cheia
    ret = full_list(li);
    if(ret == SUCCESS){
        printf("\nLista cheia!\n");
    } else {
        printf("\nLista nao esta cheia!\n");
    }

    // lista vazia
    ret = empty_list(li);
    if(ret == SUCCESS){
        printf("\nLista vazia\n");
    } else if(ret == OUT_OF_MEMORY) {
        printf("\nLista nao esta vazia!\n");
    } else {
        printf("\nErro ao definir lista vazia!\n");
    }

    // liberando lista
    ret = list_free(li);
    if(ret == SUCCESS){
        printf("\nLista liberada!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista vazia! Sem elementos para liberar!\n");
    } else {
        printf("\nErro ao liberar a lista!\n");
    }

    return 0;
}