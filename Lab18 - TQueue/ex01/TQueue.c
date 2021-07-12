#include "TQueue.h"
#include <stdio.h>
#include <stdlib.h>

struct fila 
{
    struct TLinkedList *dado;
};

TQueue *create(){
    TQueue *f;
    f = malloc(sizeof(TQueue));
    if(f != NULL)
        f->dado = list_create();
    if(f->dado == NULL){
        free(f);
    }
    return f;
}

int queue_free(TQueue *f){
    if(f == NULL)
        return INVALID_NULL_POINTER;
    if(f->dado != NULL)
        list_free(f->dado);
    free(f);
    return SUCCESS;
}

int queue_push(TQueue *f, struct aluno al){
    if(f == NULL)   
        return INVALID_NULL_POINTER;
    int ret = list_push_back(f->dado, al);
    return ret;
}

int queue_print(TQueue *f){
    if(f == NULL)
        return INVALID_NULL_POINTER;
    int ret = list_print(f->dado);
    return ret;
}