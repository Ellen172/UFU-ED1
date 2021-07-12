#include <stdio.h>
#include "TMat2D.h" //arquivo local ou que o caminho será informado

int main() {
    printf("Ola!!!\n");

    TMat2D *p;
    p = mat2d_create(10, 10);
    if(p==NULL){
        printf("Erro na alocacao da matriz\n");
    }else {
        //preencher matriz
        printf("Apagando matriz\n");
        mat2d_free(p);
    }

    return 0;
}