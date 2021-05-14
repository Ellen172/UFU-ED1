#include<stdio.h>

int main() {
    char c, nome[50];
    int i=0;

    printf("<<Vetor de char>>\n\n");
    printf("Digite um nome: ");

    c = getchar();
    while(c != '\n'){
        nome[i] = c;
        i++;
        c = getchar();
    }

    printf("O nome digitado e: ");

    for(int j=0; j<i; j++){
        printf("%c", nome[j]);
    }

    return 0;
}