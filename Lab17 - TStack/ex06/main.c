#include <stdio.h>
#include <string.h>
#include "stack.h"


int main()
{
    char *aux, posfixa[101], infixa[101];
    aux = malloc(sizeof(char));
    int pos=0;

    Pilha *st;
    st = stack_create();
    if(st == NULL){
        printf("Erro na criação!\n");
        system("pause");
        exit(1);
    } 

    printf("Digite a expressao (maximo 100 caracteres): ");
    fgets(infixa,100,stdin);
    infixa[strcspn(infixa, "\n")] = '\0'; 
    
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
    printf("\nExpressao digitada: %s\n",posfixa);

    float valores[26];
    float num;
    char c; 
    // encontrando resposta
    for (int i = 0; i< strlen(posfixa); i++) {
        c = posfixa[i];

        if (c == '+' || c == '-' || c == '*' || c == '/'){
            printf("\noperador: %c", c);
        } else if (c>=65 && c <= 90){ // testa se a letra é maior que A e menor que Z
            printf("\noperando: %c (%d)", c,c);
            printf("\nDigite o valor para %c = ",c);
            scanf("%f",&valores[c-65]); // letra A é mapeada na posição zero do vetor
        }

    }

    stack_free(st);
    system("pause");
    return 0;
}