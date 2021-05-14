#include <stdio.h>

int main() {
    int x;

    printf("<< Sucessor e Antecessor >>\n");
    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Antecessor: %d\n", x-1);
    printf("Numero: %d\n", x);
    printf("Sucessor: %d\n", x+1);
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/