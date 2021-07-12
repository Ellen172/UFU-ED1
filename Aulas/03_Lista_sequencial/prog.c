#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main(){
    struct aluno a[4] = {{2, "Andre", 9.5, 7.8, 8.5}, 
                        {4, "Ricardo", 9.5, 7.8, 8.5},
                        {1, "Bianca", 9.5, 7.8, 8.5},
                        {3, "Ana", 9.5, 7.8, 8.5}};

    Lista * li; //cria ponteiro
    li = cria_lista(); //aloca os dados na heap

    for(int i=0; i<4; i++){
        insere_lista_ordenada(li, a[i]);
    }

    imprime_lista(li);
    printf("\n\n\n\n\n");

    for(int i=0; i<5; i++){
        if(remove_lista_otimizado(li, i)==-1)
            pritnf("Erro\n");
        imprime_lista(li);
    }

    return 0;
}