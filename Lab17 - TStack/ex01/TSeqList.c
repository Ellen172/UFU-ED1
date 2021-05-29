#include "aluno.h"
#include "TSeqList.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
    int qtd;
    struct aluno dados[MAX];
};

TSeqList* cria_lista(){
    TSeqList *li;
    li = malloc(sizeof(TSeqList));
    if(li == NULL)
        return NULL;
    li->qtd = 0;
    return li;
}

void libera_lista(TSeqList* li){
    free(li);
}

// ERRO : -1
// SUCCESS : 0
int consulta_lista_pos(TSeqList* li, int pos, struct aluno* al){
    if(li == NULL || pos <= 0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}

// ERRO : -1
// SUCCESS : 0
int consulta_lista_mat(TSeqList* li, int mat, struct aluno* al){
    if(li == NULL)
        return -1;
    for(int i=li->qtd; i>=0; i--){
        if(li->dados[i].matricula == mat){
            *al = li->dados[i];
            return 0;
        }
    }
    if (al == NULL)
        return -1;
}

// ERRO : -1
// SUCCESS : 0
int insere_lista_final(TSeqList* li, struct aluno al){
    if(li == NULL || li->qtd == MAX)
        return -1;
    li->dados[li->qtd] = al;
    li->qtd ++;
    return 0;
}

// ERRO : -1
// SUCCESS : 0
int insere_lista_inicio(TSeqList* li, struct aluno al){
    if(li == NULL || li->qtd == MAX)
        return -1;
    for(int i=li->qtd-1; i>=0; i--){
        li->dados[i+1] = li->dados[i]; // o elemento passará para a proxima posição;
    }
    li->dados[0] = al;
    li->qtd++;
    return 0;
}

// ERRO : -1
// SUCCESS : 0
// int insere_lista_ordenada(Lista* li, struct aluno al){
//     if(li == NULL)
//         return -1;
    
// }

// ERRO : -1
// SUCCESS : 0
int remove_lista_inicio(TSeqList* li){
    if(li == NULL || li->qtd == 0)
        return -1;
    for(int i=0; i<li->qtd-1; i++){
        li->dados[i] = li->dados[i+1];
    }
    li->qtd--;
    return 0;
}

// ERRO : -1
// SUCCESS : 0
int remove_lista_final(TSeqList* li){
    if(li == NULL)
        return -1;
    li->qtd--;
    return 0;
}

// ERRO : -1
// SUCCESS : tamanho da lista
int tamanho_lista(TSeqList* li){
    if(li == NULL)
        return -1;
    return li->qtd;
}

// ERRO : -1
// SUCCESS : true
int lista_cheia(TSeqList* li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

// ERRO : -1
// SUCCESS : true
int lista_vazia(TSeqList* li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

void imprime_lista(TSeqList* li){
    for(int i=0; i<li->qtd; i++){
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Nota 1: %.2f; Nota 2: %.2f; Nota 3: %.2f; \n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
        printf("---------------------------\n\n");
    }
}