#include<stdio.h>

int main() {
    printf("<<Subtracao de vetores>>\n\n");

    int A[3], B[3], C[3];

    for(int i=0; i<3; i++){
        printf("Digite o valor %d de A: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
        printf("Digite o valor %d de B: ", i+1);
        scanf("%d", &B[i]);
    }

    for(int i=0; i<3; i++){
        C[i]=A[i]-B[i];
    }

    printf("\nO vetor C, definido como C = A-B e (%d, %d, %d)", C[0], C[1], C[2]);

    return 0;
}
/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80) 
*/