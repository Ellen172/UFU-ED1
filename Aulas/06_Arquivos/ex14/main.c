#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq = fopen("arq.txt", "r");
    if(arq == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    char texto[20], nome[20];
    int id;
    float h;

    fscanf(arq, "%s %s", texto, nome);
    printf("%s %s\n", texto, nome);
    fscanf(arq, "%s %d", texto, &id);
    printf("%s %d\n", texto, id);
    fscanf(arq, "%s %f", texto, &h);
    printf("%s %f\n", texto, h);

    fclose(arq);

    system("pause");
    return 0;
}