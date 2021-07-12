#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_RANGE -2
#define OUT_OF_MEMORY -3
#define ELEM_NOT_FOUND -4

struct aluno
{
    int matricula;
    char nome[30]; 
    float n1, n2, n3;
};

typedef struct elemento *Lista;

// cria lista
Lista *list_create();
// libera lista
int list_free(Lista *li);
// tamanho da lista
int list_size(Lista *li);
// lista cheia
int full_list(Lista *li);
// lista vazia; 
int empty_list(Lista *li);
// insere no inicio 
int push_front(Lista *li, struct aluno al);
// insere no final
int push_back(Lista *li, struct aluno al);
// insere ordenado
int push_ord(Lista *li, struct aluno al);