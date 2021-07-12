#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno {
    int matricula;
    char nome[100];
    float n1, n2, n3;
};

typedef struct lista Lista;

// funçoes (cabeçalhos)
// criar lista
Lista *list_create();
// liberar lista
int list_free(Lista *li);
// add elemento no inicio da lista
int list_push_front(Lista *list, struct aluno al);
