#include <stdlib.h>
#include "TStack.h"
#include "TSeqList.h"

struct TStack{
    TSeqList *list;
};

TStack *stack_create(){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st == NULL)
        return INVALID_NULL_POINTER;
    st->list = cria_lista();
    if (st->list == NULL){
        free(st);
        return INVALID_NULL_POINTER;
    }
    return st;
}

int stack_free(TStack *st)
{
    if(st == NULL)
        return INVALID_NULL_POINTER;
    libera_lista(st);
    return SUCCESS;
}

int stack_push(TStack *st, struct aluno al)
{
    if (st == NULL)
        return INVALID_NULL_POINTER;
    return insere_lista_final(st->list, al);
}

int stack_pop(TStack *st)
{

}

int stack_top(TStack *st, struct aluno *al)
{

}

int stack_empty(TStack *st)
{

}

int stack_full(TStack *st)
{

}

int stack_print(TStack *st)
{

}

