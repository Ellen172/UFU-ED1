#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TLinkedList TLinkedList;

TLinkedList *list_create(); // feito 
int list_free(TLinkedList *list); // feito

int list_push_front(TLinkedList *list, struct aluno al); // feito
int list_push_back(TLinkedList *list, struct aluno al); // feito
int list_insert(TLinkedList *list, int pos, struct aluno al); 
int list_insert_sorted(TLinkedList *list, struct aluno al); // feito
int list_size(TLinkedList *list); // feito

int list_pop_front(TLinkedList *list); // feito
int list_pop_back(TLinkedList *list); // feito 
int list_erase(TLinkedList *list, int pos); // incompleto

int list_find_pos(TLinkedList *list, int pos, struct aluno *al);
int list_find_mat(TLinkedList *list, int nmat, struct aluno *al);
int list_front(TLinkedList *list, struct aluno *al);

int list_back(TLinkedList *list, struct aluno *al);
int list_get_pos(TLinkedList *list, int nmat, int *pos);
int list_print(TLinkedList *list); // feito