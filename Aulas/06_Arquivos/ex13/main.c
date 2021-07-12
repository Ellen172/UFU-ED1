#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("arq.txt", "w");
    if(fp == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    int i = 31;
    float a = 1.74;
    char nome[20] = "Ellen";

    printf("Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);
    fprintf(fp, "Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);

    fclose(fp);

    system("pause");
    return 0;
}