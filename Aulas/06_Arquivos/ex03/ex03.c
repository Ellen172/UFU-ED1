#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int ret;
    FILE *arq; 
    arq = fopen("text.txt", "r");
    if(arq == NULL){ 
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1); 
    } else { 
        printf("Arquivo aberto com sucesso!\n");
    }

    // lendo arquivo - 10 caracteres
    char c;
    for(int i=0; i<=10; i++){
        c = fgetc(arq); // lê um caracter e armazena em c
        printf("%c", c); // printa o caracter lido
    }
    printf("\nFim\n");

    // lendo arquivo - ate o final
    c = fgetc(arq); // define o char como o primeiro caracter
    while( c!= EOF){ // retornar EOF quando não houver mais caracteres
        printf("%c", c);
        c = fgetc(arq);
    }
    printf("\nFim\n");

    ret = fclose(arq);
    if(ret == 0){ 
        printf("Arquivo fechado!\n");
    } else { 
        printf("Erro ao fechar o arquivo!\n");
    }

    return 0;
}