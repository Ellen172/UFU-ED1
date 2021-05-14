#include <stdio.h>
#include <stdlib.h>
#include "TMatQuad.h"

struct TMatQuad
{
    int *dados;
    int ordem; // ordem indica o tamanho da matriz. Por exemplo, ordem 3 indica uma matriz 3x3
};


TMatQuad* cria_matquad(int ordem){
    TMatQuad *mat;
    mat = malloc(sizeof(TMatQuad));
    if(mat == NULL)
        return NULL;
    mat->ordem = ordem;
    mat->dados = malloc(ordem*ordem*sizeof(int));
    if(mat->dados == NULL)
        return NULL;
    int pos;
    for(int col=0; col<ordem; col++){
        for(int lin=0; lin<ordem; lin++){
            pos = ordem * col + lin;
            if(col == lin)
                mat->dados[pos]=1;
            else {
                mat->dados[pos]=0;
            }
        }
    }
    return mat;
}

void libera_matquad(TMatQuad *mat){
    free(mat->dados);
    free(mat);
}

TMatQuad* cria_mat_identidade(int ordem){

}

int* copia_diagonal(TMatQuad *mat){
    if(mat==NULL)
        return NULL;
    int *vet;
    vet = malloc(mat->ordem*sizeof(int));
    int pos=0;
    for(int i=0; i<mat->ordem; i++){
        vet[i]=mat->dados[pos];
        pos += mat->ordem+1;
    }
    return vet;
}

int imprime_matriz(TMatQuad *mat, int ordem){
    int pos;
    for(int col=0; col<ordem; col++){
        for(int lin=0; lin<ordem; lin++){
            pos = ordem * col + lin;
            printf("Mat[%d][%d] = %d\n", col, lin, mat->dados[pos]);
        }
    }
}
