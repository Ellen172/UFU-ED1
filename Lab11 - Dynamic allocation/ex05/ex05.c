#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct ponto{
    int x, y;
};

int main() {
    int n; 
    struct ponto *p;
    struct ponto *cima;
    struct ponto *baixo;
    struct ponto *esq;
    struct ponto *dir;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &n);

    p = (int *)malloc(n*sizeof(struct ponto));
    cima = (int *)malloc(sizeof(struct ponto));
    baixo = (int *)malloc(sizeof(struct ponto));
    esq = (int *)malloc(sizeof(struct ponto));
    dir = (int *)malloc(sizeof(struct ponto));

    for(int i=0; i<n; i++){
        printf("Entre com a coordenada x do ponto %d: ", i+1);
        scanf("%d", &p[i].x);
        printf("Entre com a coordenada y do ponto %d: ", i+1);
        scanf("%d", &p[i].y);
        if(i==0){
            cima->y = p[i].y;
            cima->x = p[i].x;
            baixo->y = p[i].y;
            baixo->x = p[i].x;
            esq->x = p[i].x;
            esq->y = p[i].y;
            dir->x = p[i].x;
            dir->y = p[i].y;
        }
        if(p[i].x > dir->x){
            dir->x = p[i].x;
            dir->y = p[i].y;
        }
        if(p[i].x < esq->x){
            esq->x = p[i].x;
            esq->y = p[i].y;
        }
        if(p[i].y > cima->y){
            cima->y = p[i].y;
            cima->x = p[i].x;
        }
        if(p[i].y < baixo->y){
            baixo->y = p[i].y;
            baixo->x = p[i].x;
        }
    }

    printf("\nPontos digitados: ");
    for(int i=0; i<n; i++){
        printf("(%d,%d); ", p[i].x, p[i].y);
    }

    printf("\n");

    printf("Mais acima: (%d,%d)\n", cima->x, cima->y);
    printf("Mais a baixo: (%d,%d)\n", baixo->x, baixo->y);
    printf("Mais a esquerda: (%d,%d)\n", esq->x, esq->y);
    printf("Mais a direita: (%d,%d)\n", dir->x, dir->y);

    free(p);

    return 0;
}

/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/