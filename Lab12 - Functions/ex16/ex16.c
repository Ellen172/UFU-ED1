#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct ponto {
    int x, y;
};

void ind_diag(struct ponto *p, char diag[50]){
    if(strcmp(diag, "sudoeste")==0){
        p->x = p->x - 1;
        p->y = p->y - 1;
    }
    else if(strcmp(diag, "sudeste")==0){
        p->x = p->x + 1;
        p->y = p->y - 1;
    }
    else if(strcmp(diag, "nordeste")==0){
        p->x = p->x + 1;
        p->y = p->y + 1;
    }
    else if(strcmp(diag, "noroeste")==0){
        p->x = p->x - 1;
        p->y = p->y + 1;
    }
}

int main(){
    struct ponto *p;
    char diag[50];
    p = malloc(sizeof(struct ponto));
    
    // definindo valores
    p->x = 1;
    p->y = 3;
    strcpy(diag, "sudeste");
    // definindo valores 
    
    if(strcmp(diag, "sudeste")==0){
        printf("(%d,%d) sudeste => ", p->x, p->y);
    }
    else if(strcmp(diag, "sudoeste")==0){
        printf("(%d,%d) sudoeste => ", p->x, p->y);
    }
    else if(strcmp(diag, "nordeste")==0){
        printf("(%d,%d) nordeste => ", p->x, p->y);
    }
    else if(strcmp(diag, "noroeste")==0){
        printf("(%d,%d) noroeste => ", p->x, p->y);
    }

    ind_diag(p, diag);
    printf("(%d,%d)\n", p->x, p->y);

    return 0;
}
/*
=> Crie um procedimento para andar na diagonal (sudeste, 
sudoeste, nordeste, noroeste). Use obrigatoriamente as funções do 
exercício anterior.

Exemplo de chamada:
ind_diag(p,"sudeste"); 
ind_diag(p,"sudoeste");

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) sudeste => (2,2)
(2,4) sudoeste => (1,3)
-------------------------------------------------------------------------------
*/