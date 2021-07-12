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
    
    struct cadastro c;
    fseek(arq, 2*sizeof(struct cadastro), SEEK_SET);
    fread(&c, sizeof(struct cadastro), 1, arq);
    printf("%s\n%s\n%d\n", c.nome, c.rua, c.idade);

    fclose(arq);

    system("pause");
    return 0;
}