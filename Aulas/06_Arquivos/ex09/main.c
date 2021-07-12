#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20];
    FILE *f = fopen("arq.txt", "wb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1);
    }
    
    int total_gravado;

    int vetor[5] = {1, 2, 3, 4, 5};
    total_gravado = fwrite(vetor, sizeof(int), 5, f);
    if(total_gravado != 5){
        printf("Erro na escrita!\n");
        system("pause");
        exit(1);
    } 
    printf("Array escrito\n");

    float x = 5;
    total_gravado = fwrite(&x, sizeof(float), 1, f);
    if(total_gravado != 1){
        printf("Erro na escrita!\n");
        system("pause");
        exit(1);
    }
    printf("Float escrito\n");

    fclose(f);

    system("pause");
    return 0;
}