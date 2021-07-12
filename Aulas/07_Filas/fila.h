#include "aluno.h"
#include <stdio.h>

#define MAX 100
#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define ELEM_NOT_FOUND -2
#define OUT_OF_RANGE -3
#define OUT_OF_MEMORY -4

typedef struct fila Fila;

Fila *cria_fila();
void libera_fila(Fila *fi);
int tamanho_fila(Fila *fi);
int fila_cheia(Fila  *fi);
int fila_vazia(Fila *fi);
int insere_fila(Fila *fi, struct aluno al); // sempre no final
int remove_fila(Fila *fi); // sempre no inicio
int consultar_fila(Fila *fi, struct aluno *al); // sempre o primeiro da fila