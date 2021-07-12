#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1);
    }

    char texto[20] = "Meu programa em C";
    // escrevendo string com fputs
    int ret = fputs(texto, f);
    if(ret == EOF){
        printf("Erro na gravacao!\n");
    }

    fclose(f);

    system("pause");
    return 0;
}