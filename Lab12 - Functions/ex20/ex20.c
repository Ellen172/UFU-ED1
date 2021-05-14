#include <stdio.h>
#include <stdlib.h>


int copiarvet(int *vet_origem, int *vet_destino, int n){
    for(int i=0; i<n; i++){
        vet_destino[i] = vet_origem[i];
    }
    return 0;
}

int main(){
    int vet_origem[5] = {1, 2, 3, 4, 5}, 
        vet_destino[5] = {1, 2, 3, 3, 6};
    printf("O vetor de origem eh: ");
    for(int i=0; i<5; i++){
        if(i==4){
            printf("%d\n", vet_origem[i]);
        } else{
            printf("%d, ", vet_origem[i]);
        }
    }
    printf("O vetor de destino eh: ");
    for(int i=0; i<5; i++){
        if(i==4){
            printf("%d\n", vet_destino[i]);
        } else{
            printf("%d, ", vet_destino[i]);
        }
    }

    copiarvet(vet_origem, vet_destino, 5);
    printf("O vetor de destino apos a copia eh: ");
    for(int i=0; i<5; i++){
        if(i==4){
            printf("%d\n", vet_destino[i]);
        } else{
            printf("%d, ", vet_destino[i]);
        }
    }

    return 0;
}

/*
=> Faça uma função para copiar um vetor inteiro para outro 
vetor. Ambos vetores devem ter o mesmo tamanho. Mostre no 
programa principal os dois vetores.

Chamada:
copiarvet(vet_origem, vet_destino, n);


Os valores são definidos na função principal.
-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1, 2, 3, 4, 5
O vetor de destino eh: 1, 2, 3, 3, 6
O vetor de destino apos a copia eh: 1, 2, 3, 4, 5
-------------------------------------------------------------------------------
*/