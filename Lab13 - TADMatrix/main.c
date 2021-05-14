#include <stdio.h>
#include <stdlib.h>
#include "TMat2D.h"
// segmentation fault no final

int main(){
    printf("\n\t << INICIO DO PROGRAMA >>\n");

    Matriz *mat_1, *mat_2, *soma, *multMat, *multEsc;
    int *pos_1, *pos_2;
    double *val_1, *val_2; 
    int nlin1=3, ncol1=3;
    int nlin2=3, ncol2=3;
    int x;

    mat_1 = cria_matriz(nlin1, ncol1); 
    mat_2 = cria_matriz(nlin2, ncol2); 
    
    // escrevendo mat_1
    for(int col=0; col<ncol1; col++){
        for(int lin=0; lin<nlin1; lin++){
            pos_1 = escrever_ij(mat_1, lin, col, pos_1); // escrever ij = pos  
            preenche_matriz_aleatorio(mat_1, 0, 15);
            acessar_ij(mat_1, pos_1, val_1); // acessar em val a variavel mat->data[pos] para cada posição
        }
    }
    // escrevendo mat_2
    for(int col2=0; col2<ncol2; col2++){
        for(int lin2=0; lin2<nlin2; lin2++){
            pos_2 = escrever_ij(mat_2, lin2, col2, pos_2); // escrever ij = pos  
            preenche_matriz_aleatorio(mat_2, 0, 15);
            acessar_ij(mat_2, pos_2, val_2); // acessar em val a variavel mat->data[pos] para cada posição
        }
    }

    // imprimindo as matrizes
    printf("\n << Matriz 01 >> \n\n");
    imprime_matriz(mat_1);
    printf("\n << Matriz 02 >> \n\n");
    imprime_matriz(mat_2);

    // imprimindo a soma de mat_1 e mat_2
    printf("\n << Matriz Soma >> \n\n");
    soma = soma_matriz(mat_1, mat_2, soma);
    x = imprime_matriz(soma);
    if(x == -1)
        printf("Não foi possivel calcular!\n");

    // imprimindo a multiplicação de mat_1 com mat_2
    printf("\n << Multiplicacao Matriz01 e Matriz02 >> \n\n");
    multMat = multiplica_matriz(mat_1, mat_2, multMat);
    x = imprime_matriz(multMat);
    if(x == -1)
        printf("Não foi possivel calcular!\n");

    // imprimindo a multiplicação escalar de mat_1
    printf("\n << Matriz01 Multiplicacao Escalar >> \n");
    int esc = 3;
    multEsc = multiplica_escalar(mat_1, esc, multEsc);
    x = imprime_matriz(multEsc);
    if(x == -1)
        printf("Não foi possivel calcular!\n");

    // imprimindo o traço de mat_2
    double tracoMat;
    printf("\n << Matriz02 Traco >> \n");
    x = traco_matriz(mat_2, &tracoMat);
    if(x == -1)
        printf("Não foi possivel calcular!\n");
    else {
        printf("Traco de Mat 02 = %.2lf\n", tracoMat);
    } 

    // imprimindo a soma das linhas de mat_1
    printf("\n << Soma das linhas Mat 01 >> \n\n");
    double soma_lin[nlin1];
    x = soma_linha(mat_1, nlin1, soma_lin);
    if(x == -1)
        printf("Não foi possivel calcular!\n");
    else {
        for(int lin=0; lin<nlin1; lin++){
            printf("soma[%d] = %.2lf\n", lin, soma_lin[lin]);
        }
    }

    // imprimindo a soma das colunas de mat_2
    printf("\n << Soma das colunas Mat 02 >> \n\n");
    double soma_col[ncol2];
    x = soma_coluna(mat_2, ncol2, soma_col); 
    if(x == -1)
        printf("Não foi possivel calcular!\n");
    else {
        for(int col=0; col<ncol2; col++){
            printf("soma[%d] = %.2lf\n", col, soma_lin[col]);
        }
    }

    // liberando memoria alocada para Matriz
    libera_matriz(mat_1);
    libera_matriz(mat_2);
    libera_matriz(soma); 
    libera_matriz(multMat); 
    libera_matriz(multEsc); 

    // liberando memoria alocada para int e double
    free(val_1);
    free(val_2);
    free(pos_1);
    free(pos_2);
    free(soma_col);
    free(soma_lin);
    
    printf("\n\t << FIM DO PROGRAMA!! >>  \n");
    return 0;
}
