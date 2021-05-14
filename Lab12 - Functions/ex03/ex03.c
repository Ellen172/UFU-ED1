#include<stdio.h>
#include<string.h>
#include<ctype.h>

long long int fatorial(a){
    long long int fat=1;
    while(a>1){
        fat*=a;
        a--;
    }

    return fat;
}

desenhaLinha(int x){
    while(x>0){
        printf("=");
        x--;
    }
    printf("\n");
}

int main(){
    int a, x;
    long long int r;

    printf("Digite o tamanho da linha: ");
    scanf("%d", &x);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &a);

    r = fatorial(a);

    desenhaLinha(x);
    printf("O fatorial de %d eh %lld\n",a, r);
    desenhaLinha(x);

    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/