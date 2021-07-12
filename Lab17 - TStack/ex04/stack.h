#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define SUCCESS 0
#define INVALID_POINTER_NULL -1
#define OUT_OF_RANGE -2
#define OUT_OF_MEMORY -3

typedef struct pilha Pilha;

// cria pilha 
Pilha *stack_create();
// libera pilha 
int stack_free(Pilha *pi);
// tamanho da pilha 
int stack_size(Pilha *pi);
// pilha cheia 
int stack_full(Pilha *pi);
// pilha vazia
int stack_empty(Pilha *pi);
// insere elemento
int stack_push(Pilha *pi, char nome);
// remove elemento
int stack_pop(Pilha *pi);
// consulta pilha 
int stack_consult(Pilha *pi, char *nome);