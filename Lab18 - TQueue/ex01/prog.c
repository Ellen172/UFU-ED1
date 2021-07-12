#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "TQueue.h"

int main()
{
    int ret;
    TQueue *f;
    f = create(); // criando fila
    if(f == NULL){
        printf("Erro ao criar fila!\n");
    } else {
        printf("Fila criada\n");
    }

    struct aluno a, b, c;
    a.matricula = 1;
    strcpy(a.nome, "Ana");
    a.n1 = 1.2; a.n2 = 3.4; a.n3 = 4.5;
    b.matricula = 2;
    strcpy(b.nome, "Marcos");
    b.n1 = 2.3; b.n2 = 6.5; b.n3 = 2.1;
    c.matricula = 3;
    strcpy(c.nome, "Geovana");
    c.n1 = 5.0; c.n2 = 2.4; c.n3 = 3.7;

    // inserindo elemento
    ret = queue_push(f, a);
    if(ret == SUCCESS){
        printf("Aluno A inserido com sucesso!\n");
    } else {
        printf("Erro ao inserir aluno A!\n");
    }
    ret = queue_push(f, b);
    if(ret == SUCCESS){
        printf("Aluno B inserido com sucesso!\n");
    } else {
        printf("Erro ao inserir aluno B!\n");
    }
    ret = queue_push(f, c);
    if(ret == SUCCESS){
        printf("Aluno C inserido com sucesso!\n");
    } else {
        printf("Erro ao inserir aluno C!\n");
    }

    ret = queue_free(f); // liberando fila
    if(ret == SUCCESS){
        printf("Fila liberada!\n");
    } else {
        printf("Erro na liberacao da fila!\n");
    }

    // printando fila;
    queue_print(f);

    return 0;
}