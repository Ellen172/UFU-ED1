#include <stdio.h>

#define MAX 100
#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct Queue TQueue;

// criar fila
TQueue *create_queue();
// liberar fila
int free_queue(TQueue *fila);
// inserir elemento (no final)
int queue_push(TQueue *fila, struct aluno al);
// remover elemento (no inicio)
int queue_pop(TQueue *fila);
// consultar elemento (no inicio)
int queue_consult(TQueue *fila, struct aluno *al);