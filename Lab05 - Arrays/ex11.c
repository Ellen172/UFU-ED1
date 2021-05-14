#include<stdio.h>

int main() {
    printf("<<Pares e impares>>\n\n");

    int v[5], v1[5], v2[5];

    for(int i=0; i<5; i++){
        v1[i]=0;
        v2[i]=0;
    }

    for (int i=0; i<5; i++){
        printf("Digite o valor %d : ", i+1);
        scanf("%d", &v[i]);

        if(v[i]%2==0){
            v1[i]=v[i];
        }
        else{
            v2[i]=v[i];
        }
    }

    printf("\nImpares: ");
    for(int i=0; i<5; i++){
        if(v2[i]!=0){
            printf("%d ", v2[i]);
        }
    }
    printf("\nPares: ");
    for(int i=0; i<5; i++){
        if(v1[i]!=0){
            printf("%d ", v1[i]);
        }
    }

    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.  
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/