#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TSeqList.h"

int main(){
    Lista *li, *li_ord;
    li = cria_lista(); 
    li_ord = cria_lista(); 
    int ret, tam;

    struct aluno a, b, c, d;
    a.matricula = 1;
    strcpy(a.nome, "Ana");
    a.n1 = 3; a.n2 = 6; a.n3 = 9;
    b.matricula = 2;
    strcpy(b.nome, "Caio");
    b.n1 = 6; b.n2 = 7; b.n3 = 1;
    c.matricula = 3;
    strcpy(c.nome, "Mariana");
    c.n1 = 5; c.n2 = 9; c.n3 = 7;
    d.matricula = 4;
    strcpy(d.nome, "Amauri");
    d.n1 = 4; d.n2 = 8; d.n3 = 6; 

    // lista ordenada
    insere_lista_ordenada(li_ord, a);
    insere_lista_ordenada(li_ord, d);
    insere_lista_ordenada(li_ord, b);
    insere_lista_ordenada(li_ord, c);
    imprime_lista(li_ord);

    int mat;
    printf("Insira a matricula que deseja excluir: ");
    scanf("%d", &mat);
    remove_lista(li_ord, mat);
    printf("\n");
    imprime_lista(li_ord);

    // lista desordenada
    insere_lista_final(li, a); // insere o aluno a no final da lista;
    insere_lista_inicio(li, b); // insere b no inicio da lista;
    insere_lista_final(li, c);
    insere_lista_final(li, d);
    imprime_lista(li);
    tam = tamanho_lista(li);
    if(tam == -1){
        printf("Erro!\n");
    } else {
        printf("Tamanho da lista: %d\n", tam);
    }

    // encontrando aluno pela posição
    struct aluno *al_pos;
    al_pos = malloc(sizeof(struct aluno));
    int pos;
    printf("\nDigite a posicao que voce deseja: ");
    scanf("%d", &pos);
    ret = consulta_lista_pos(li, pos, al_pos);
    if(ret == 0){
        printf("\nAluno 01\n");
        printf("Matricula: %d\n", al_pos->matricula);
        printf("Nome: %s\n", al_pos->nome);
        printf("Nota 1 = %.2f ; Nota 2 = %.2f ; Nota 3 = %.2f \n", al_pos->n1, al_pos->n2, al_pos->n3);
    } else {
        printf("Erro!\n");
    }

    // encontrando aluno pela matricula
    struct aluno *al_mat;
    al_mat = malloc(sizeof(struct aluno));
    int mat;
    printf("\nDigite a matricula desejada: ");
    scanf("%d", &mat);
    ret = consulta_lista_mat(li, mat, al_mat);
    if(ret == 0){
        printf("Matricula: %d\n", al_mat->matricula);
        printf("Nome: %s\n", al_mat->nome);
        printf("Nota 1 = %.2f ; Nota 2 = %.2f ; Nota 3 = %.2f \n", al_mat->n1, al_mat->n2, al_mat->n3);
    } else {
        printf("Erro!\n");
    }

    // removendo aluno do inicio da lista
    ret = remove_lista_inicio(li);
    if(ret == 0){
        printf("\nNova lista: \n");
        imprime_lista(li);
        tam = tamanho_lista(li);
        if(tam == -1){
            printf("Erro!\n");
        } else {
            printf("Tamanho da lista: %d\n", tam);
        }
    } else {
        printf("Erro!\n");
    }

    // removendo aluno do final da lista
    ret = remove_lista_final(li);
    if(ret == 0){
        printf("\nNova lista: \n");
        imprime_lista(li);
        tam = tamanho_lista(li);
        if(tam == -1){
            printf("Erro!\n");
        } else {
            printf("Tamanho da lista: %d\n", tam);
        }
    } else {
        printf("Erro!\n");
    }

    // lista cheia ou vazia?
    ret = lista_cheia(li);
    if(ret == -1){
        printf("Erro!");
    } else if(ret != 0) {
        printf("Lista cheia!\n");
    }
    ret = lista_vazia(li);
    if(ret == -1){
        printf("Erro!");
    } else if(ret != 0){
        printf("Lista vazia!\n");
    }

    free(al_pos);
    free(al_mat);
    libera_lista(li);
    return 0;
}