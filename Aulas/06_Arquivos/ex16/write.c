#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[20], rua[20];
    int idade;
};


int main() {
    FILE *arq = fopen("arq.txt", "wb");
    if(arq == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    char var[6] = "1 2 3";
    var[6] = '\0';

    fwrite(var, sizeof(char), 6, arq);

    fclose(arq);

    system("pause");
    return 0;
}