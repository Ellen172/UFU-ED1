// tad
#include <stdio.h>
#include <stdlib.h>

typedef struct matriz Matriz;

// Criar
Matriz *cria_matriz(int nlin, int ncol);
// Destruir o TAD
int libera_matriz(Matriz *mat);
// Escrever elemento i,j
int *escrever_ij(Matriz *mat, int nlin, int ncol, int *pos);
// Acessar elemento i,j
int acessar_ij(Matriz *mat, int *pos, double *val);
// Preencher com números aleatórios entre um valor mínimo e máximo
int preenche_matriz_aleatorio(Matriz *mat, int min, int max);
// Somar duas matrizes
Matriz *soma_matriz(Matriz *mat1, Matriz *mat2, Matriz *soma);
// Multiplicar duas matrizes
Matriz *multiplica_matriz(Matriz *mat1, Matriz *mat2, Matriz *multMat);
// Multiplicar uma matriz por um valor escalar
Matriz *multiplica_escalar(Matriz *mat, int esc, Matriz *multEsc);
// Calcular o Traço da matriz
int traco_matriz(Matriz *mat, double *tracoMat);
// Retornar um vetor com a soma das linhas
int soma_linha(Matriz *mat, int lin, double *soma_lin); 
// Retornar um vetor com a soma das colunas
int soma_coluna(Matriz *mat, int col, double *soma_col); 
// imprime a matriz
int imprime_matriz(Matriz *mat);