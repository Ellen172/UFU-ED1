#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    Pilha *st;
    st = stack_create();
    if(st == NULL){
        printf("Erro na criação!\n");
        system("pause");
        exit(1);
    } else {
        printf("Pilha criada!\n");
    }
    
    char infixa[50] = "(A*(B+(C*(D+(E*(F+G))))))"; 

    char *aux, posfixa[50];
    aux = malloc(sizeof(char));
    int pos=0;
    for(int i=0; i<strlen(infixa); i++){
        if(infixa[i] == '('){
            stack_push(st, infixa[i]);
        }
        else if(infixa[i] == ')'){
            stack_consult(st, aux);
            stack_pop(st);
            while(*aux != '('){
                posfixa[pos] = *aux;
                pos++;
                stack_consult(st, aux);
                stack_pop(st);
            }
        }
        else if(infixa[i] == '*' || infixa[i] == '/'){
            stack_consult(st, aux);
            stack_pop(st);
            while(*aux != '(' && *aux != '+' && *aux != '-'){
                posfixa[pos] = *aux;
                pos++;
                stack_consult(st, aux);
                stack_pop(st);
            }
            stack_push(st, *aux);
            stack_push(st, infixa[i]);
        }
        else if(infixa[i] == '+' || infixa[i] == '-'){
            stack_consult(st, aux);
            stack_pop(st);
            while(*aux != '('){
                posfixa[pos] = *aux;
                pos++;
                stack_consult(st, aux);
                stack_pop(st);
            }
            stack_push(st, *aux);
            stack_push(st, infixa[i]);
        }
        else {
            posfixa[pos] = infixa[i];
            pos++;
        }

    }
    posfixa[pos] = '\0';
    printf("Posfixa = %s\n", posfixa);

    stack_free(st);
    system("pause");
    return 0;
}