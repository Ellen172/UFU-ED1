#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[50];

    printf("\n  << Vetor de char >>  \n\n");

    printf("Digite um nome: ");
    gets(str);

    printf("O nome digitado e: %s\n", str);

    return 0;
}