#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20];
    FILE *f = fopen("arq.txt", "rb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1);
    }
    
    int lidos;
    int v[5];
    lidos = fread(v, sizeof(int), 5, f);
    if(lidos != 5){
        printf("Erro na leitura\n");
        system("pause");
        exit(1);
    }
    printf("vetor = %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4]);

    float x;
    lidos = fread(&x, sizeof(float), 1, f);
    if(lidos != 1){
        printf("Erro na leitura\n");
        system("pause");
        exit(1);
    }
    printf("x = %f\n", x);

    fclose(f);

    system("pause");
    return 0;
}