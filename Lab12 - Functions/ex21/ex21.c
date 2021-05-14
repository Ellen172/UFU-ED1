#include <stdio.h>
#include <stdlib.h>

int multvet(int *vetor, int n, int escalar){
    for(int i=0; i<n; i++){
        vetor[i] *= escalar;
    }
    return 0;
}

int main(){
    int n, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Digite o valor do escalar: ");
    scanf("%d", &x);

    printf("O vetor de origem eh: ");
    for(int i=0; i<n; i++){
        if(i==n-1){
            printf("%d\n", vet[i]);
        } else {
            printf("%d, ", vet[i]);
        }
    }

    multvet(vet, n, x);
    printf("O vetor final eh: ");
    for(int i=0; i<n; i++){
        if(i==n-1){
            printf("%d\n", vet[i]);
        } else {
            printf("%d, ", vet[i]);
        }
    }

    return 0;
}

/*
=> Faça uma função para multiplicar um vetor por um escalar 
(um número). Mostre, no programa principal, o vetor antes e depois 
da multiplicação.

Chamada:
multvet(vetor, n, escalar);


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e o valor do escalar.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 5
Digite o valor 1: 2
Digite o valor 2: 4
Digite o valor 3: 10
Digite o valor 4: 6
Digite o valor 5: 5
Digite o valor do escalar: 3

O vetor de origem eh: 2, 4, 10, 6, 5
O vetor final eh: 6, 12, 30, 18, 15
-------------------------------------------------------------------------------
*/