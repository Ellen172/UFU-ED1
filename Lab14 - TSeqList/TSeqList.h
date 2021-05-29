// .h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct lista Lista;

Lista* cria_lista(); // feito
void libera_lista(Lista* li); // feito
int consulta_lista_pos(Lista* li, int pos, struct aluno* al); // feito
int consulta_lista_mat(Lista* li, int mat, struct aluno* al); // feito
int insere_lista_final(Lista* li, struct aluno al); // feito
int insere_lista_inicio(Lista* li, struct aluno al); // feito
int insere_lista_ordenada(Lista* li, struct aluno al); // feito
int remove_lista(Lista* li, int mat); // feito
int remove_lista_inicio(Lista* li); // feito
int remove_lista_final(Lista* li); // feito
int tamanho_lista(Lista* li); // feito
int lista_cheia(Lista* li); // feito
int lista_vazia(Lista* li); // feito
void imprime_lista(Lista* li); // feito
int remove_lista_otimizado(Lista* li, int mat);