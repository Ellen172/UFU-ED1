#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    int tam, ret;
    // cria lista
    Fila *fi;
    fi = cria_fila();
    if(fi == NULL){
        printf("\nErro ao criar a fila!\n");
        system("pause");
        exit(1);
    } else {
        printf("\nFila criada!\n");
    }

    struct aluno *aux;
    aux = malloc(sizeof(struct aluno));
    struct aluno a, b, c;
    a.matricula = 1;
    strcpy(a.nome, "Caio");
    a.n1 = 5; a.n2 = 7; a.n3 = 9;
    b.matricula = 2;
    strcpy(b.nome, "Amanda");
    b.n1 = 7; b.n2 = 2; b.n3 = 6;
    c.matricula = 3;
    strcpy(c.nome, "Lucas");
    c.n1 = 3; c.n2 = 8; c.n3 = 4;

    // insere elemento na fila
    ret = insere_fila(fi, a);
    if(ret == SUCCESS){
        printf("\nElemento inserido\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nNao ha espaco para este elemento\n");
    } else {
        printf("\nErro ao inserir elemento\n");
    }

    // consultar fila
    ret = consultar_fila(fi, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento dna fila\n");
    } else {
        printf("Erro: consultar fila\n");
    }

    // insere elemento na fila
    ret = insere_fila(fi, b);
    if(ret == SUCCESS){
        printf("\nElemento inserido\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nNao ha espaco para este elemento\n");
    } else {
        printf("\nErro ao inserir elemento\n");
    }
    // consultar fila
    ret = consultar_fila(fi, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento dna fila\n");
    } else {
        printf("Erro: consultar fila\n");
    }

    // insere elemento na fila
    ret = insere_fila(fi, c);
    if(ret == SUCCESS){
        printf("\nElemento inserido\n");
    } else if(ret == OUT_OF_RANGE){
        printf("\nNao ha espaco para este elemento\n");
    } else {
        printf("\nErro ao inserir elemento\n");
    }
    // consultar fila
    ret = consultar_fila(fi, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento dna fila\n");
    } else {
        printf("Erro: consultar fila\n");
    }
    
    // remove elemento da fila
    ret = remove_fila(fi);
    if(ret == SUCCESS){
        printf("Elemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento para remover!\n");
    } else {
        printf("Erro na remocao!\n");
    }
    // consultar fila
    ret = consultar_fila(fi, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento dna fila\n");
    } else {
        printf("Erro: consultar fila\n");
    }
    
    // remove elemento da fila
    ret = remove_fila(fi);
    if(ret == SUCCESS){
        printf("Elemento removido!\n");
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento para remover!\n");
    } else {
        printf("Erro na remocao!\n");
    }
    // consultar fila
    ret = consultar_fila(fi, aux);
    if(ret == SUCCESS){
        printf("\nPrimeiro da fila\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Aluno: %s\n", aux->nome);
        printf("Notas: %f; %f; %f\n", aux->n1, aux->n2, aux->n3);
    } else if(ret == OUT_OF_RANGE){
        printf("Nao ha elemento dna fila\n");
    } else {
        printf("Erro: consultar fila\n");
    }

    // verificações da fila
    tam = tamanho_fila(fi);
    if(tam < 0){
        printf("\nErro: tamanho da fila\n");
    } else {
        printf("\nTamanho da fila: %d\n", tam);
    }
    ret = fila_cheia(fi);
    if(ret == SUCCESS){
        printf("Fila cheia\n");
    } else if(ret == OUT_OF_MEMORY){
        printf("Fila nao esta cheia!\n");
    } else {
        printf("Erro: lista cheia\n");
    }
    ret = fila_vazia(fi);
    if(ret == SUCCESS){
        printf("Fila vazia\n");
    } else if(ret == OUT_OF_MEMORY){
        printf("Fila nao esta vazia!\n");
    } else {
        printf("Erro: lista vazia\n");
    }

    // libera fila
    libera_fila(fi);
    return 0;
}