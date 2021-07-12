#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[20], rua[20];
    int idade;
};


int main() {
    FILE *arq = fopen("arq.txt", "rb");
    if(arq == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    
    char var[10];
    fread(var, sizeof(char), 1, arq);
    printf("var = %s\n", var);
    while (var != '\0'){
        fread(var, sizeof(char), 1, arq);
        printf("var = %s\n", var);
    }

    // rewind(arq); // volta para o inicio do arquivo

    fclose(arq);

    system("pause");
    return 0;
}