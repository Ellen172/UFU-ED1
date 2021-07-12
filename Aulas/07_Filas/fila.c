#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

struct fila
{
    int inicio, final, qtd;
    struct aluno dados[MAX];
};

Fila *cria_fila(){
    Fila *fi;
    fi = malloc(sizeof(Fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }
    return fi;
}

void libera_fila(Fila *fi){
    free(fi);
}

int tamanho_fila(Fila *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    return fi->qtd;
}

int fila_cheia(Fila  *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    if(fi->qtd == MAX)
        return SUCCESS;
    else 
        return OUT_OF_MEMORY;
}

int fila_vazia(Fila *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    if(fi->qtd == 0){
        return SUCCESS;
    } else {
        return OUT_OF_MEMORY;
    }
}

int insere_fila(Fila *fi, struct aluno al){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    if(fila_cheia(fi) == SUCCESS)
        return OUT_OF_RANGE;
    fi->dados[fi->final] = al; // coloca na posição final
    fi->final = (fi->final+1)%MAX; // anda com o final um elemento (se for mais do que MAX volta para as primeiras posições)
    fi->qtd++; // aumenta a qtd de elementos
    return SUCCESS;
}

int remove_fila(Fila *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    if(fila_vazia(fi) == SUCCESS)
        return OUT_OF_RANGE;
    fi->inicio = (fi->inicio+1)%MAX; // anda uma posição com inicio (se for maior que MAX volta para primeiras posições)
    fi->qtd--; // diminui a qtd de elementos
    return SUCCESS;
}

int consultar_fila(Fila *fi, struct aluno *al){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    if(fila_vazia(fi)== SUCCESS)
        return OUT_OF_RANGE;
    *al = fi->dados[fi->inicio];
    return SUCCESS;
}