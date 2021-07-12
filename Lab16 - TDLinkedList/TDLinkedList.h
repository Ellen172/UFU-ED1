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

typedef struct TDLinkedList TDLinkedList;

TDLinkedList *list_create(); // feito
int list_free(TDLinkedList *li); // feito
int list_push_front(TDLinkedList *li, struct aluno al); // feito
int list_push_back(TDLinkedList *li, struct aluno al); // feito
int list_insert(TDLinkedList *li, int pos, struct aluno al); // feito
int list_size(TDLinkedList *li); // feito
int list_pop_front(TDLinkedList *li); // feito
int list_pop_back(TDLinkedList *li); // feito
int list_erase(TDLinkedList *li, int pos ); // feito
int list_find_pos(TDLinkedList *li, int pos, struct aluno *al); // feito
int list_find_mat(TDLinkedList *li, int nmat, struct aluno *al); // feito
int list_front(TDLinkedList *li, struct aluno *al); // feito
int list_back(TDLinkedList *li, struct aluno *al); // feito
int list_get_pos(TDLinkedList *li, int nmat , int *pos); // incompleto
int list_print_forward(TDLinkedList *li); // feito
int list_print_reverse(TDLinkedList *li); // feito