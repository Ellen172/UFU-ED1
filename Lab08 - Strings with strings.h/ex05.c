#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[40], nome[40], sobre[40];

    printf("\n\t<< Vetor de char >> \n\n");

    printf("Digite um nome e sobrenome: ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';

    strcpy(nome, str);
    nome[strcspn(nome, " ")] = '\0';

    int pos=0;
    for(int i=strcspn(str, " ")+1; i<=strcspn(str, "\n"); i++){
        sobre[pos] = str[i];
        pos++;
    }
    
    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobre);

    return 0;
}