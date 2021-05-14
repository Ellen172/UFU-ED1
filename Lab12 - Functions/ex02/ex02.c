#include<stdio.h>
#include<string.h>
#include<ctype.h>

desenhaLinha(int x){
    while(x>0){
        printf("=");
        x--;
    }
    printf("\n");
}

int main(){
    int n, x;
    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf("%d", &n);
    printf("Digite o tamanho da linha: ");
    scanf("%d", &x);

    while(n>0){
        desenhaLinha(x);
        n--;
    }

    return 0;
}
/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
O procedimento deve ter como argumento um valor que indica
quantos caracteres "=" serão mostrados. 

Ex: DesenhaLinha(4) tem como saída ====; 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário quantas vezes a função 
deverá ser executada e qual o tamanho da linha a ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
Digite o tamanho da linha: 5
=====
=====
=====
-------------------------------------------------------------------------------
*/