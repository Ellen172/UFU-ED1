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

    struct cadastro cad[4] = {"Ricardo", "Rua 1", 31,
                                "Carlos", "Rua 2", 28, 
                                "Ana", "Rua 3", 45,
                                "Bianca", "Rua 4", 32};

    fwrite(cad, sizeof(struct cadastro), 4, arq);

    fclose(arq);

    system("pause");
    return 0;
}