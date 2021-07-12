#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int ret;

    FILE *f1, *f2; 
    f1 = fopen("arq1.txt", "r");
    f2 = fopen("arq2.txt", "w");
    if(f1 == NULL || f2 == NULL){ 
        printf("Erro ao abrir os arquivos!\n");
        system("pause");
        exit(1); 
    } else { 
        printf("Arquivos aberto com sucesso!\n");
    }

    char c = fgetc(f1); // lendo arquivo f1
    while (c != EOF) { 
        fputc(toupper(c), f2); // escreverndo arquivo f2
        c = fgetc(f1); // lendo arquivo f1
    }

    ret = fclose(f1);
    ret = fclose(f2);
    return 0;
}