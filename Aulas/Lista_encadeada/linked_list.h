#define SUCCESS 0 // sucesso 
#define INVALID_NULL_POINTER -1 // ponteiro nulo
#define OUT_OF_MEMORY -2 // sem memoria
#define OUT_OF_RANGE -3 // fora do intervalo existente
#define ELEM_NOT_FOUND -4 // elemento não encontrado

struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct linkedList linkedList;

// criar lista
linkedList *list_create();
// inserir no inicio da lista
int list_push_front(linkedList *list, struct aluno al);
// inserir no fim da lista
int list_push_back(linkedList *list, struct aluno al);
// printar lista 
int list_print(linkedList *list);
// remover elemento da lista
int list_free(linkedList *list);
// tamanho da lista
int list_size(linkedList *list);