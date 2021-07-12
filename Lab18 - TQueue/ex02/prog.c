#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TQueue.h"

int main()
{
    int ret;
    struct aluno *aux;
    aux = malloc(sizeof(struct aluno));
    struct aluno al1, al2, al3;
    al1.matricula = 123;
    strcpy(al1.nome, "Amelia");
    al1.n1 = 4.3; al1.n2 = 4.5; al1.n3 = 4.8;
    al2.matricula = 234;
    strcpy(al2.nome, "Carlos");
    al2.n1 = 2.3; al2.n2 = 8.5; al2.n3 = 8.3;
    al3.matricula = 345;
    strcpy(al3.nome, "Lucas");
    al3.n1 = 3.2; al3.n2 = 8.5; al3.n3 = 6.5;

    // criando fila 
    TQueue *fila;
    fila = create_queue();
    if(fila == NULL){
        printf("\nErro ao criar a fila!\n");
        system("pause");
        exit(1);
    } else {
        printf("\nFila criada!\n");
    }

    // inserindo elemento
    ret = queue_push(fila, al1);
    if(ret == SUCCESS){
        printf("\nElemento inserido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista cheia! Impossivel inserir elemento!\n");
    } else {
        printf("\nErro ao inserir elemento!\n");
    }
    ret = queue_push(fila, al2);
    if(ret == SUCCESS){
        printf("\nElemento inserido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista cheia! Impossivel inserir elemento!\n");
    } else {
        printf("\nErro ao inserir elemento!\n");
    }
    ret = queue_push(fila, al3);
    if(ret == SUCCESS){
        printf("\nElemento inserido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista cheia! Impossivel inserir elemento!\n");
    } else {
        printf("\nErro ao inserir elemento!\n");
    }

    // consulta elemento 
    ret = queue_consult(fila, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE) {
        printf("Fila vazia!\n");
    } else {
        printf("Erro ao consultar aluno!\n");
    }

    // remove elemento
    ret = queue_pop(fila);
    if(ret == SUCCESS){
        printf("\nElemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista vazia! Impossivel remover elemento!\n");
    } else {
        printf("\nErro ao remover elemento!\n");
    }
    // consulta elemento 
    ret = queue_consult(fila, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE) {
        printf("Fila vazia!\n");
    } else {
        printf("Erro ao consultar aluno!\n");
    }
    // remove elemento
    ret = queue_pop(fila);
    if(ret == SUCCESS){
        printf("\nElemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista vazia! Impossivel remover elemento!\n");
    } else {
        printf("\nErro ao remover elemento!\n");
    }
    // consulta elemento 
    ret = queue_consult(fila, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE) {
        printf("Fila vazia!\n");
    } else {
        printf("Erro ao consultar aluno!\n");
    }
    // remove elemento
    ret = queue_pop(fila);
    if(ret == SUCCESS){
        printf("\nElemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nLista vazia! Impossivel remover elemento!\n");
    } else {
        printf("\nErro ao remover elemento!\n");
    }
    // consulta elemento 
    ret = queue_consult(fila, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE) {
        printf("Fila vazia!\n");
    } else {
        printf("Erro ao consultar aluno!\n");
    }
    free(aux);

    // liberando fila
    ret = free_queue(fila);
    printf("ret = %d\n", ret);
    if(ret == SUCCESS){
        printf("Fila liberada!\n");
    }
    return 0;
}