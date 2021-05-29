#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "Stack.h"
#include "TDLinkedList.h"

int main() {
    // ex 01 
    TDLinkedList *list, *clone;
    list = list_create();
    clone = list_create();

    struct aluno a,b,c,d;
    strcpy(a.nome,"Joao");
    a.matricula = 1;
    a.n1 = 0;    a.n2 = 2;    a.n3 = 0;
    strcpy(b.nome,"Maria");
    b.matricula = 2;
    b.n1 = 2;    b.n2 = 0;    b.n3 = 0;
    strcpy(c.nome,"Jose");
    c.matricula = 3;
    c.n1 = 0;    c.n2 = 0;    c.n3 = 4;
    strcpy(d.nome,"Ana");
    d.matricula = 4;
    d.n1 = 0;    d.n2 = 0;    d.n3 = 2;

    // (a)
    printf("\n<< letra a >>\n\n");
    list_push_back(list, a);
    list_push_back(list, b);
    list_push_back(list, c);
    list_push_back(list, d);
    list_print_forward(list);

    list_erase_pares(list);
    list_print_forward(list);

    // (b)
    printf("\n<< letra b >>\n\n");
    list_push_front(clone, d);
    list_push_front(clone, a);
    list_print_forward(clone);
    list_splice(clone, list, 1);
    list_print_forward(clone);

    list_free(list);

    // ex 02
    printf("\n<< ex 2 >>\n\n");
    Pilha *st;
    push(st, 2);
    push(st, 3);
    pop(st);
    push(st, 4);
    push(st, 5);
    pop(st);
    print(st);
    free_pilha(st);

    // Quais elementos ficaram na pilha ao final da execução do código acima? 
    // 2 - 4 ;
    return 0;
}