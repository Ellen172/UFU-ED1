#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int ret;

    // definindo ponteiro do tipo arquivo
    FILE *arq; 
    
    // abrindo arquivo 
    arq = fopen("text.txt", "w");
    if(arq == NULL){ // erro 
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1); // aborta a programa
    } else { // sucesso
        printf("Arquivo aberto com sucesso!\n");
    }

    // fechando o arquivo
    ret = fclose(arq);
    if(ret == 0){ // sucesso
        printf("Arquivo fechado!\n");
    } else { // erro
        printf("Erro ao fechar o arquivo!\n");
    }

    return 0;
}