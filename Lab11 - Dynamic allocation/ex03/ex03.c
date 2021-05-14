#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int n, p=0, ip=0;
    int *num;

    printf("Insira a quantidade de inteiros: ");
    scanf("%d", &n);

    num = (int *)malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for(int i=0; i<n; i++){
        if(num[i]%2 == 0){
            p++;
        }else {
            ip++;
        }
    }

    printf("\nSao %d numeros pares e %d numeros impares\n", p, ip);

    free(num);

    return 0;
}

/*
3) Faça um programa que leia n inteiros (definidos pelo usuário) 
armazenando-os em uma memória alocada dinamicamente. Em seguida, mostre
quantos dos n números são pares e quantos são ímpares.


Exemplo de saída:
<< Par ou Impar >>
Quantos inteiros serao lidos: 5
1º inteiro: 1
2º inteiro: 2
3º inteiro: 3
4º inteiro: 4
5º inteiro: 5

Sao pares: 2 dos 5 inteiros lidos.
Sao impares: 3 dos 5 inteiros lidos.

*/