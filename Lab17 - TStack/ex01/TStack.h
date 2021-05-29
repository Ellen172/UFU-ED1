#ifndef _tstackh_
#define _tstackh_

#include "aluno.h"

typedef struct TStack TStack;

// cria stack
TStack *stack_create();
// libera a memoria alocada para stack
int stack_free(TStack *st);

// insere um elemento
int stack_push(TStack *st, struct aluno al);
// remove um elemento
int stack_pop(TStack *st);
// consulta um elemento
int stack_top(TStack *st, struct aluno *al);

// verifica se stack vazia
int stack_empty(TStack *st);
// verifica se stack cheia
int stack_full(TStack *st);
// printa a stack
int stack_print(TStack *st);

#endif