#include "TLinkedList.h"

typedef struct fila TQueue;

TQueue *create(); // cria lista
int queue_free(TQueue *f); // libera lista
int queue_push(TQueue *f, struct aluno al); // insere elemento (sempre no final) 

int queue_print(TQueue *f); // imprime fila