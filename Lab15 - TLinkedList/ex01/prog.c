#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TLinkedList.h"

int main(){
    TLinkedList *list;
    int ret;

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

    list = list_create();
    if (list == NULL){
       printf("ERRO!\n");
       exit(1);
    } 
    // inserindo elementos na lista
    list_push_back(list, a);
    list_push_back(list, b);
    list_push_back(list, c);
    list_push_front(list, d);        
    // printar lista
    list_print(list);
    int tam = list_size(list);
    printf("\nTamanho da lista: %d\n", tam);
    // retirando elementos da lista
    printf("\nRetirando elementos da lista\n");
    list_erase(list, 2); // retirando elemento na posicao 2
    // list_pop_front(list); // retirando elemento do inicio
    // list_pop_back(list); // retirando elemento do fim 
    list_print(list);

    list_free(list);
    list = NULL;

    TLinkedList *listord;
    listord = list_create(); 
    list_insert_sorted(listord, c); 
    list_insert_sorted(listord, a);
    list_insert_sorted(listord, b);
    list_insert_sorted(listord, d);
    printf("Lista Ordenada\n");
    list_print(listord);
    list_free(listord);
    listord = NULL;

}