#include<stdio.h>

int main() {
    int vet[5], maior=-100, menor=100000;
    double media=0;

    printf("<<5 valores>>\n\n");

    for(int i=0; i<5; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i]>maior){
            maior = vet[i];
        }
        if(vet[i]<menor){
            menor = vet[i];
        }
        media+=vet[i];
    }

    printf("\nOs numeros digitados sao: ");
    for(int i=0; i<5; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);
    printf("A media e: %.1lf\n", media/5);

    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/