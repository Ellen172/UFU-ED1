#define SUCCESS 0
#define ERROR -1
#define MAX 100

struct pilha {
    int val[MAX];
    int qtd;
};

typedef struct pilha Pilha;

Pilha *create_stack();
int push(Pilha *st, int num);
int pop(Pilha *st);
int print(Pilha *st);