#include<stdio.h>

int main() {
    int vet[8], count[8];

    printf("<< Valores iguais >> \n\n");

    for(int i=0; i<8; i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &vet[i]);
        count[i]=1;
    }    
    
    for(int i=0; i<7; i++){
        int j=i;
        while(j<8){
            j++;
            if(vet[i]==vet[j]){
                if(count[i]>=2){
                    count[j]++;
                    count[i]=1;
                }
                else {
                    count[j]++;
                }
            }
        }
    }
    
    printf("\nValores Repetidos \n");
    for(int i=0; i<8; i++){
        if(count[i]>1){
            printf("> %d ", vet[i], count[i]);
        }
    }

    return 0;
}



/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/