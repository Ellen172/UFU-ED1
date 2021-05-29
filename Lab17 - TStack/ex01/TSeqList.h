#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

#define MAX 100

typedef struct lista TSeqList;

TSeqList* cria_lista(); // feito
void libera_lista(TSeqList* li); // feito
int consulta_lista_pos(TSeqList* li, int pos, struct aluno* al); // feito
int consulta_lista_mat(TSeqList* li, int mat, struct aluno* al); // feito
int insere_lista_final(TSeqList* li, struct aluno al); // feito
int insere_lista_inicio(TSeqList* li, struct aluno al); // feito
int insere_lista_ordenada(TSeqList* li, struct aluno al);
int remove_lista(TSeqList* li, int mat);
int remove_lista_inicio(TSeqList* li); // feito
int remove_lista_final(TSeqList* li); // feito
int tamanho_lista(TSeqList* li); // feito
int lista_cheia(TSeqList* li); // feito
int lista_vazia(TSeqList* li); // feito
void imprime_lista(TSeqList* li); // feito
int remove_lista_otimizado(TSeqList* li, int mat);