#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"

struct TMat2D
{
    int nlinhas;
    int ncolunas;
    double *data;
};

TMat2D *mat2d_create(int nlin, int ncol){

    TMat2D *mat;

    mat = malloc(sizeof(TMat2D));
    if(mat == NULL){
        return NULL;
    }

    mat->ncolunas =  ncol;
    mat->nlinhas =  nlin;

    mat->data = malloc(ncol*nlin*sizeof(double));
    if(mat->data == NULL){
        free(mat);
        return NULL;
    }

    return mat;
}

// retorna 0: sucesso
// retorna -1: erro
int mat2d_free(TMat2D *mat){
    if (mat == NULL){
        return -1;
    }else {
        free(mat->data);
        free(mat);
    }
}