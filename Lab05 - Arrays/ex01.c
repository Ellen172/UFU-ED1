#include<stdio.h>

int main() {
    printf("<< Listando um vetor>>\n\n");

    int vet[6];
    printf("Entre com o numero 1: ");
    scanf("%d", &vet[0]);
    printf("Entre com o numero 2: ");
    scanf("%d", &vet[1]);
    printf("Entre com o numero 3: ");
    scanf("%d", &vet[2]);
    printf("Entre com o numero 4: ");
    scanf("%d", &vet[3]);
    printf("Entre com o numero 5: ");
    scanf("%d", &vet[4]);
    printf("Entre com o numero 6: ");
    scanf("%d", &vet[5]);

    printf("Os valores lidos sao: %d %d %d %d %d %d\n", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5], vet[6]);

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Não utilize loops e utilize vetores para armazenar os números.
nova linha para testar!
 
Exemplo de saída:
<< Listando um vetor >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Valores lidos: 5 6 4 0 3 6
*/
