#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TLinkedList.h"

int main(){
    TLinkedList *list;
    int ret, pos;

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
    printf("Digite a posicao que deseja inserir o aluno a: ");
    scanf("%d", &pos);
    ret = list_insert(list, pos, a); // insere na posição indicada
    if (ret == OUT_OF_RANGE){
      printf("Posicao inexistente\n");
    }
    list_push_back(list, b); // insere no final
    list_push_front(list, c); // insere no inicio
    printf("Digite a posicao que deseja inserir o aluno d: ");
    scanf("%d", &pos);
    ret = list_insert(list, pos, d); // insere na posição indicada
    if (ret == OUT_OF_RANGE){
      printf("Posicao inexistente\n");
    }

    list_print(list);
    int tam = list_size(list);
    printf("\nTamanho da lista: %d\n", tam);
    /* 
    // imprimindo o primeiro elemento da lista
    struct aluno *fst;
    fst = malloc(sizeof(struct aluno));
    printf("Primeiro aluno da lista\n");
    ret = list_front(list, fst);
    if(ret == SUCCESS){
      printf("Matricula: %d\n", fst->matricula);
      printf("Aluno: %s\n", fst->nome);
      printf("Notas: %f, %f, %f;\n", fst->n1, fst->n2, fst->n3);
    } else {
      printf("Aluno nao encontrado\n");
    }

    // encontrando aluno pela posição
    struct aluno *al;
    al = malloc(sizeof(struct aluno));
    printf("Digite a posicao desejada da lista: ");
    scanf("%d", &pos);
    ret = list_find_pos(list, pos, al);
    if(ret == SUCCESS){
      printf("Matricula: %d\n", al->matricula);
      printf("Aluno: %s\n", al->nome);
      printf("Notas: %f, %f, %f;\n", al->n1, al->n2, al->n3);
    } else {
      printf("Posicao nao encontrada\n");
    }

    // encontrando aluno pela matricula
    struct aluno *al2;
    al2 = malloc(sizeof(struct aluno));
    int nmat;
    printf("Digite a matricula desejada da lista: ");
    scanf("%d", &nmat);
    ret = list_find_mat(list, nmat, al2);
    if(ret == SUCCESS){
      printf("Matricula: %d\n", al2->matricula);
      printf("Aluno: %s\n", al2->nome);
      printf("Notas: %f, %f, %f;\n", al2->n1, al2->n2, al2->n3);
    } else {
      printf("Matricula nao encontrada\n");
    }
    */

    // retirando elementos da lista
    printf("\nRetirando elementos da lista\n");
    list_erase(list, 3); // retirando da posicao 2
    // list_pop_front(list); // retirando do inicio
    // list_pop_back(list); // retirando do fim 
    list_print(list);

    list_free(list);
    list = NULL;

    // TLinkedList *listord;
    // listord = list_create(); 
    // list_insert_sorted(listord, c); 
    // list_insert_sorted(listord, a);
    // list_insert_sorted(listord, b);
    // list_insert_sorted(listord, d);
    // printf("Lista Ordenada\n");
    // list_print(listord);
    // list_free(listord);
    // listord = NULL;

}