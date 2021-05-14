#include<stdio.h>
#include<string.h>
#include<ctype.h>

void desenhaLinha(){
    printf("========\n");
}

int main(){
    int n;

    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf("%d", &n);

    while(n>0){
        desenhaLinha();
        n--;
    }

    return 0;
}
/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
No programa principal execute várias chamadas a esse procedimento (use um loop).

Ex: DesenhaLinha(3) tem como saída:
    ========
    ========
    ======== 

No programa principal, solicite ao usuário quantas vezes a linha deverá ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
========
========
========
-------------------------------------------------------------------------------
*/