// tad

#include "TMat2D.h"
#include <stdio.h>
#include <stdlib.h>

struct matriz{
    int nrows;
    int ncolumns;
    double *data;
};

// return : matriz alocada
Matriz *cria_matriz(int nlin, int ncol){
    Matriz *mat; //ponteiro local que será retornado para o ponteiro no programa principal

    mat = malloc(sizeof(Matriz)); //aloca na heap a struct matriz inicializada em 0
    if(mat == NULL)
        return NULL;
    mat->nrows = nlin; //define as linhas da matriz (x.nrows) como o valor dado (nlin)
    mat->ncolumns = ncol; //define as colunas da matriz (x.ncolumns) como o valor dado (ncol)

    mat->data = malloc(nlin*ncol*sizeof(double)); //aloca os valores double armazenados na matriz;
    if(mat->data == NULL)
        return NULL;

    return mat;
}

// return -1 : erro 
// return 0 : sucesso
int libera_matriz(Matriz *mat){
    if (mat == NULL){
        return -1;
    }else {
        free(mat->data);
        free(mat);
        return 0;
    }
}

// return -1 : erro 
// return 0 : sucesso
int *escrever_ij(Matriz *mat, int nlin, int ncol, int *pos){
    if(mat == NULL)
        return NULL;
    else {
        pos = malloc(sizeof(int));
        *pos = ncol * mat->nrows + nlin;
    }
    return pos;
}

// return -1 : erro 
// return 0 : sucesso
int acessar_ij(Matriz *mat, int *pos, double *val){
    if(mat == NULL)
        return -1;
    else
        val = malloc(sizeof(double));
        *val = mat->data[*pos]; // o valor referenciado por val sera o valor de mat->data[*pos] o valor de mat->data na posição pos
    return 0;
}

// return -1 : erro 
// return 0 : sucesso
int preenche_matriz_aleatorio(Matriz *mat, int min, int max){
    if(mat == NULL)
        return -1;
    int pos = mat->nrows * mat->ncolumns;
    for(int i=0; i<pos; i++){
        mat->data[i] = rand() % (max-min);
    }
}

// return Matriz soma
Matriz *soma_matriz(Matriz *mat1, Matriz *mat2, Matriz *soma){
    if(mat1 == NULL || mat2 == NULL || mat1->nrows != mat2->nrows || mat1->ncolumns != mat2->ncolumns)
        return NULL;
    int pTotal = mat1->nrows * mat1->ncolumns;
    soma = cria_matriz(mat1->nrows, mat1->ncolumns);
    for(int i=0; i<pTotal; i++){
        soma->data[i] = mat1->data[i] + mat2->data[i];
    }
    return soma;
}

// return Matriz multiplica_matriz
Matriz *multiplica_matriz(Matriz *mat1, Matriz *mat2, Matriz *multMat){
    // verificando se as matrizes podem ser multiplicadas
    if(mat1 == NULL || mat2 == NULL || mat1->ncolumns != mat2->nrows)
        return NULL;
    // criando matriz multMat
    multMat = cria_matriz(mat2->nrows, mat1->ncolumns);
    // calculo da multiplicação
    int pos_multMat = multMat->nrows * multMat->ncolumns;
    double val_mat1, val_mat2, mult;
    int pos_mat1=0, pos2_mat1=0, pos_mat2=0, pos2_mat2=0;
    for(int p=0; p<=pos_multMat; p++){ 
        // cada posição de multMat
        mult = 0;
        pos_mat2 = 0;
        if(p > 0 && p%3 == 0){
            pos_mat2 += multMat->nrows;
            pos2_mat1 = 0;
        }
        for(int lin=0; lin<mat2->nrows; lin++){
            // cada linha de multMat
            val_mat2 = mat2->data[pos_mat2];
            pos_mat1 = pos2_mat1;
            for(int col=0; col<mat1->ncolumns; col++){ 
                // para cada coluna de multMat
                val_mat1 = mat1->data[pos_mat1];
                pos_mat1 += mat1->ncolumns;
                mult += (val_mat2 * val_mat1);
            }
            pos_mat2++;
        }
        pos2_mat1++;
        multMat->data[p] = mult;
    }
    return multMat;
}

// return Matriz multiplica_escalar
Matriz *multiplica_escalar(Matriz *mat, int esc, Matriz *multEsc){
    // verificar se a multiplicação escalar é possivel 
    if(mat == NULL)
        return NULL;
    // alocar matriz multEsc
    multEsc = cria_matriz(mat->nrows, mat->ncolumns);
    // calculo da multiplicação
    int pos = multEsc->nrows * multEsc->ncolumns;
    for(int i=0; i<=pos; i++){
        multEsc->data[i] = mat->data[i] * esc;
    }
    return multEsc;
}

// return -1 : erro 
// return 0 : sucesso
int traco_matriz(Matriz *mat, double *tracoMat){
    if(mat == NULL)
        return -1;
    *tracoMat = 0;
    int pos = mat->nrows * mat->ncolumns;
    int i=0;
    while(i<pos){
        *tracoMat += mat->data[i];
        i += mat->nrows+1;
    }
    return 0;
}

// return -1 : erro 
// return 0 : sucesso 
int soma_linha(Matriz *mat, int lin, double *soma){ 
    if(mat == NULL)
        return -1;
    // definindo o soma como zero em todas as posições
    for(int i=0; i<lin; i++){
        soma[i] = 0; 
    }    
    // calculo de soma das linhas
    int pos_mat = 0;
    for(int lin=0; lin<mat->nrows; lin++){
        pos_mat = lin;
        for (int col=0; col<mat->ncolumns; col++){
            soma[lin] += mat->data[pos_mat];
            pos_mat += mat->nrows;
        }
    }
    return 0;
}

// return -1 : erro 
// return 0 : sucesso 
int soma_coluna(Matriz *mat, int col, double *soma){ 
    if(mat == NULL)
        return -1;
    // definindo o soma como zero em todas as posições
    for(int i=0; i<col; i++){
        soma[i] = 0; 
    }    
    // calculo de soma das linhas
    int pos_mat = 0;
    for(int col=0; col<mat->nrows; col++){
        //pos_mat = col;
        for (int lin=0; lin<mat->ncolumns; lin++){
            soma[col] += mat->data[pos_mat];
            pos_mat ++;
        }
    }
    return 0;
}

// return -1 : erro 
// return 0 : sucesso
int imprime_matriz(Matriz *mat){
    if(mat == NULL)
        return -1;
    for(int col=0; col<mat->ncolumns; col++){
        for(int lin=0; lin<mat->nrows; lin++){
            int pos = col * mat->nrows + lin;
            printf("[%d][%d] = %.2lf\n", col, lin, mat->data[pos]);
        }
    }
    return 0;
}
