#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[20];
    FILE *f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1);
    }

    char *result = fgets(str, 12, f);
    if(result == NULL)
        printf("Erro na leitura\n");
    else 
        printf("%s", str);
    printf("\n");

    fclose(f);

    system("pause");
    return 0;
}