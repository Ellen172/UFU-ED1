#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDLinkedList.h"

int main(){
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

    TDLinkedList *list;
    list = list_create(); // criando lista
    int pos, ret, mat;
    
    list_push_front(list, a);
    list_push_front(list, b);
    list_push_back(list, c);
    list_print_forward(list);

    printf("Digite a posicao para inserir o aluno d: ");
    scanf("%d", &pos);
    list_insert(list, pos, d);
    list_print_forward(list);

    int tam = list_size(list);
    printf("O tamanho da lista eh %d\n", tam);

    printf("Digite a posicao para deletar: ");
    scanf("%d", &pos);
    list_erase(list, pos);
    list_print_forward(list);

    struct aluno *al;
    al = malloc(sizeof(struct aluno));
    printf("\nDigite a posicao do aluno desejado: ");
    scanf("%d", &pos);
    ret = list_find_pos(list, pos, al);
    if(ret == SUCCESS){
        printf("Matricula: %d\n", al->matricula);
        printf("Nome: %s\n", al->nome);
        printf("Notas: %f, %f, %f\n", al->n1, al->n2, al->n3);
    } else {
        printf("Erro!\n");
    }

    struct aluno *al2;
    al2 = malloc(sizeof(struct aluno));
    printf("\nDigite a matricula do aluno desejado: ");
    scanf("%d", &mat);
    ret = list_find_mat(list, mat, al2);
    if(ret == SUCCESS){
        printf("Matricula: %d\n", al2->matricula);
        printf("Nome: %s\n", al2->nome);
        printf("Notas: %f, %f, %f\n", al2->n1, al2->n2, al2->n3);
    } else {
        printf("Erro!\n");
    }

/*
    int *p;
    p = malloc(sizeof(int));
    printf("Digite a matricula da posicao desejada: ");
    scanf("%d", &mat);
    ret = list_get_pos(list, mat, p);
    if(ret == SUCCESS){
        printf("Posicao adquirida!\n");
    } else {
        printf("Erro!\n");
    }
*/

    struct aluno *fst;
    fst = malloc(sizeof(struct aluno));
    ret = list_front(list, fst);
    printf("\n=== Primeiro aluno da lista ===\n");
    if(ret == SUCCESS){
        printf("Matricula: %d\n", fst->matricula);
        printf("Nome: %s\n", fst->nome);
        printf("Notas: %f, %f, %f\n", fst->n1, fst->n2, fst->n3);
    } else {
        printf("Erro!\n");
    }

    struct aluno *end;
    end = malloc(sizeof(struct aluno));
    ret = list_back(list, end);
    printf("\n=== Ultimo aluno da lista ===\n");
    if(ret == SUCCESS){
        printf("Matricula: %d\n", end->matricula);
        printf("Nome: %s\n", end->nome);
        printf("Notas: %f, %f, %f\n", end->n1, end->n2, end->n3);
    } else {
        printf("Erro!\n");
    }

    list_pop_front(list);
    list_pop_back(list);
    list_print_forward(list);
    list_print_reverse(list);

    list_free(list);

    return 0;
}