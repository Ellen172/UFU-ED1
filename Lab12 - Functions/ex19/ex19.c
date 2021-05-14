#include <stdio.h>

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

int negativos(double *vet, int tam){
    int count=0;
    for(int i=0; i<tam; i++){
        if(vet[i]<0){
            count++;
        }
    }
    return count;
}

int main(){
    int tam, count;
    double *vet, *maior, *menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet=malloc(tam*sizeof(double));

    for(int i=0; i<tam; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%lf", &vet[i]);
    }

    printa_vetor(vet, tam);
    count = negativos(vet, tam); 

    printf("O vetor tem %d numero(s) negativo(s)\n", count);

    return 0;
}

/*
=> Implemente uma função que receba como parâmetro um 
vetor de n números reais (VET) de tamanho N e retorne quantos 
números negativos há a nesse vetor. Use o seguinte protótipo:

int negativos(float *vet, int N); 

No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 3
Digite o valor 3: -2

O vetor principal eh: -1.00, 3.00, -2.00
O vetor tem 2 numero(s) negativo(s)
-------------------------------------------------------------------------------
*/