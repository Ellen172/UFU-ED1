#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct ponto {
    int x, y;
};

void inc_dir(struct ponto *p, char dir){
    if(dir == 'n'){
        p->y = p->y+1;
    }else if(dir == 's'){
        p->y = p->y-1;
    }else if(dir == 'l'){
        p->x = p->x+1;
    }else if(dir == 'o'){
        p->x = p->x-1;
    }
}

int main(){
    struct ponto *p;
    p = malloc(sizeof(struct ponto));

    // inserindo valores 
    p->x = 2;
    p->y = 4;
    char dir = 'l';
    // inserindo valores

    if(dir == 'n')
        printf("(%d,%d) norte => ", p->x, p->y);
    else if(dir == 's')
        printf("(%d,%d) sul => ", p->x, p->y);
    else if(dir == 'l')
        printf("(%d,%d) leste => ", p->x, p->y);
    else if(dir == 'o')
        printf("(%d,%d) oeste => ", p->x, p->y);
    
    inc_dir(p, dir);

    printf("(%d,%d)\n", p->x, p->y);

    return 0;
}

/*
=> Faça um procedimento chamado inc_dir, que faz o ponto 
andar uma unidade para leste, oeste, norte, sul (passar como 
referência e retorno void)

Exemplo de chamada:
inc_dir(p,'l'); // anda uma unidade para o leste (incrementa x)
inc_dir(p,'o'); // anda uma unidade para o oeste (decrementa x)

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) norte => (1,4)
(2,4) leste => (3,4)
-------------------------------------------------------------------------------
*/