#include<stdio.h>

int main() {
    int vet[5], maior=-100, menor=100000, maior_i, menor_i;
    double media=0;

    printf("<<5 valores>>\n\n");

    for(int i=0; i<5; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i]>maior){
            maior = vet[i];
            maior_i = i;
        }
        if(vet[i]<menor){
            menor = vet[i];
            menor_i = i;
        }
        media+=vet[i];
    }

    printf("\nOs numeros digitados sao: ");
    for(int i=0; i<5; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    printf("O maior valor e: %d, localizado na posicao %d do vetor\n", maior, maior_i);
    printf("O menor valor e: %d, localizado na posicao %d do vetor\n", menor, menor_i);
    printf("A media e: %.1lf\n", media/5);

    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/