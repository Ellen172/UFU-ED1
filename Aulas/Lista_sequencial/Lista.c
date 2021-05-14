#include<stdio.h>
#include<stdlib.h>
#include "Lista.h"

//definicao do tipo lista
struct lista{
    int qtd; //o que diferencia a lista do vetor -> é possivel definir a qtd de alunos em tempo de execução
    struct aluno dados[MAX]; //vetor de alunos que não é generica para outros tipos
};

// cria_lista : realiza a inicialização do TAD lista
// parameters : não há
// return value : endereço de memoria da lista criada dinamicamente
Lista* cria_lista(){
    Lista *li; //criar variavel local
    li = (Lista*) malloc(sizeof(struct lista)); //aloca a estrutura lista na heap, apontada por *li
    if(li != NULL)
        li->qtd = 0;
    return li;
}

void libera_lista(Lista * li){
    free(li); //apagando o ponteiro apagará todos os termos, inclusive struct alunos
}

int insere_lista_final (Lista * li, struct aluno al){
    if(li == NULL) //erro na alocação
        return -1;
    if(li->qtd == MAX) //maximo de elementos
        return -1;
    li->dados[li->qtd] = al;
    li->qtd++; //aumenta uma posição

    return 0;
}

//inserir no inicio sera mais lento, pois há o for

int insere_lista_inicio (Lista * li, struct aluno al){
    if(li == NULL)
        return -1;
    if(li->qtd == MAX) 
        return -1;
    int i;
    for(i=li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];
    li->dados[0] = al;
    li->qtd++;

    return 0;
}

consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    if(li == NULL || pos <= 0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}

consulta_lista_mat(Lista * li, int mat, struct aluno *al){
    if(li == NULL)
        return -1;
    int i=0;
    while(i<li->qtd && li->dados[i].matricula != mat) //busca pelos valores cadastrados
        i++; 
    if(i == li->qtd) //elemento não encontrado
        return -1;
    *al = li->dados[i];
    return 0;
}

int remove_lista_inicio(Lista* li){
    if(li == NULL)
        return -1;
    if(li->qtd == 0)
        return 0;
    int k=0;
    for(k=0; k< li->qtd-1; k++) //grande custo computacional
        li->dados[k] = li->dados[k+1]; //troca-se os elementos de forma que o segundo sobrepoem o primeiro
    li->qtd--; //diminui a qtd acessando um elemento a menos
    return 0;
}

int remove_lista_final(Lista*li){
    if(li == NULL)
        return -1;
    if(li->qtd == 0)
        return 0;
    li->qtd--; //diminui a qtd não acessando o ultimo elemento
    return 0;
}

