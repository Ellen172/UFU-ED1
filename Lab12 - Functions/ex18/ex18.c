#include <stdio.h>
#include <stdlib.h>

void printa_vetor(double *vet, int tam){
    printf("O vetor principal eh: ");
    //printando o vetor
    for(int i=0; i<tam; i++){
        if(i == tam-1)
            printf("%.2lf\n", vet[i]);
        else
            printf("%.2lf, ", vet[i]);
    }
}

void maior_valor(double *vet, int tam){
    //encontrando o maior valor do vetor
    double *maior;
    for(int i=0; i<tam; i++){
        if(i==0){
            *maior = vet[i];
        }
        else if(vet[i] > *maior){
            *maior=vet[i];
        }
    }
    printf("O maior valor eh: %.2lf\n", *maior);
}

void menor_valor(double *vet, int tam){
    //encontrando o menor valor do vetor
    double *menor;
    for(int i=0; i<tam; i++){
        if(i==0){
            *menor = vet[i];
        }
        else if(vet[i] < *menor){
            *menor=vet[i];
        }
    }
    printf("O menor valor eh: %.2lf\n", *menor);
}

int main(){
    int tam;
    double *vet, *maior, *menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet=malloc(tam*sizeof(double));

    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%lf", &vet[i]);
    }

    printa_vetor(vet, tam);
    maior_valor(vet, tam);
    menor_valor(vet, tam);

    return 0;
}

/*
=> Crie um procedimento que recebe um vetor de double como 
entrada e devolve o maior e o menor elemento do vetor. Mostre no 
programa principal o vetor, o maior e o menor elemento.


No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 0.02
Digite o valor 3: 3

O vetor principal eh: -1.00, 0.02, 3.00
O maior valor eh 3.00
O menor valor eh -1.00
-------------------------------------------------------------------------------
Obs: note que para este caso, foram consideradas duas casas após o ponto. 
*/