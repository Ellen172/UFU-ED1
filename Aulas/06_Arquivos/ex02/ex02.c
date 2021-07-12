#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int ret;
    FILE *arq; 
    arq = fopen("text.txt", "w");
    if(arq == NULL){ 
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1); 
    } else { 
        printf("Arquivo aberto com sucesso!\n");
    }

    // escrevendo um caracter com fputc
    fputc('a', arq);

    // escrevendo uma frase com fputc
    char frase[10] = "\nHello!";
    for(int i=0; i<strlen(frase); i++){
        fputc(frase[i], arq);
    }

    // escrevendo uma frase com fputc (com traços entre os caracteres)
    for(int i=0; i<strlen(frase); i++){
        fputc(frase[i], arq);
        fputc('-', arq);
    }

    ret = fclose(arq);
    if(ret == 0){ 
        printf("Arquivo fechado!\n");
    } else { 
        printf("Erro ao fechar o arquivo!\n");
    }

    return 0;
}