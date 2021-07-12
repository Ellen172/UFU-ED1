#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int ret;
    Pilha *st;
    st = stack_create();
    if(st == NULL){
        printf("Erro na criação!\n");
        system("pause");
        exit(1);
    } else {
        printf("Pilha criada!\n");
    }
    
    char str[20] = "([])"; 
    // escrevendo string na pilha
    for(int i=0; i<strlen(str); i++){
        stack_push(st, str[i]);
    }

    char *aux, str_aux[20];
    aux = malloc(sizeof(char));
    int pos=0;
    while(stack_empty(st) != SUCCESS){
        stack_consult(st, aux); // pegar elemento do topo
        stack_pop(st); // remove elemento em aux
        if(*aux == ')'){
            str_aux[pos] = *aux;
            pos ++;
        }
        if(*aux == ']'){
            str_aux[pos] = *aux;
            pos ++;
        }
        if(*aux == '('){
            if(str_aux[pos-1] != ')'){
                printf("Lista mal formada!\n");
                stack_free(st);
                system("pause");
                exit(1);
            } else {
                pos--;
            }
        }
        if(*aux == '['){
            if(str_aux[pos-1] != ']'){
                printf("Lista mal formada!\n");
                stack_free(st);
                system("pause");
                exit(1);
            } else {
                pos--;
            }
        }
    }
    printf("Lista bem formada!\n");
    stack_free(st);
    system("pause");
    return 0;
}