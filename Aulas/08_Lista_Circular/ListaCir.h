#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0;
#define ERROR -1;

struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct elemento *Lista;

Lista *create(); // cria lista
int list_free(Lista *li); // libera lista
int list_size(Lista *li); // tamanho da lista