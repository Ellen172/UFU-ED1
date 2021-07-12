#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[30], endereco[30];
    int idade;
};

int main() {
    FILE *arq = fopen("struct.txt", "rb");
    if(arq == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    struct cadastro cad;
    fread(&cad, sizeof(struct cadastro), 1, arq);
    printf("%s\n%s\n%d\n", cad.nome, cad.endereco, cad.idade);

    fclose(arq);
    system("pause");
    return 0;
}