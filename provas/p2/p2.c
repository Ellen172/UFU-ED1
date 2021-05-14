#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "TGrafico.h"
#include "TMatQuad.h"

int main(){
    printf("\n << Grafico >> \n\n");
    TGrafico *li;
    struct ponto pto;
    char eixo_x[100], eixo_y[100], titulo[100];
    int qtd;

    // ex 1
    li = cria_grafico();

    char temp[110];
    printf("Digite o nome do eixo x: "); 
    fgets(temp, 100, stdin);
    strcpy(eixo_x, temp);
    printf("Digite o nome do eixo y: ");
    fgets(temp, 100, stdin);
    strcpy(eixo_y, temp);
    definir_nomes_eixos(li, eixo_x, eixo_y);

    printf("Digite o nome do Titulo: ");
    fgets(temp, 100, stdin);
    strcpy(titulo, temp);
    definir_titulo(li, titulo);

    printf("Digite quantos pontos deseja inserir na lista: ");
    scanf("%d", &qtd);

    for(int i=1; i<=qtd; i++){
        printf("Digite a coordenada (x) do ponto %d: ", i);
        scanf("%d", &pto.x);
        printf("Digite a coordenada (y) do ponto %d: ", i);
        scanf("%d", &pto.y);
        insere_ponto_fim(li, pto);
    }

    mostrar_grafico(li);

    // ex 2

    // ex 3
    int pos;
    printf("Digite a posicao em que o ponto sera inserido: ");
    scanf("%d", &pos);
    printf("Digite a coordenada (x) do ponto 3: ");
    scanf("%d", &pto.x);
    printf("Digite a coordenada (y) do ponto 3: ");
    scanf("%d", &pto.y);
    insere_ponto(li, pto, pos);

    // ex 4
    printf("\n << Matriz >> \n\n");
    TMatQuad *mat;
    int ordem;
    printf("Insira a ordem da matriz: ");
    scanf("%d", &ordem);
    mat = cria_matquad(ordem);
    imprime_matriz(mat, ordem);

    // ex 5
    int *vet;
    vet = copia_diagonal(mat);
    for(int i=0; i<ordem; i++){
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    // liberar memoria
    libera_matquad(mat);
    apaga_grafico(li);

    
    return 0;
}