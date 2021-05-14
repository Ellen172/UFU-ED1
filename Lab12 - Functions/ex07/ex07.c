#include<stdio.h>
#include<string.h>
#include<ctype.h>

troca(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a, b;

    printf("Digite o numero de A: ");
    scanf("%d", &a);
    printf("Digite o numero de B: ");
    scanf("%d", &b);

    troca(&a,&b);

    printf("O numero A eh: %d \nO numero B eh: %d \n", a, b);

    return 0;
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/