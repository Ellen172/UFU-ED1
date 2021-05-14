#include<stdio.h>
#include<string.h>
#include<ctype.h>

quadrado_perfeito(int n){
    int x=0, raiz;
    raiz=sqrt(n)*10;

    if(raiz%10==0){
        x++;
    }

    return x;
}

int main(){
    int n, x;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    x = quadrado_perfeito(n);

    if(x==1){
        printf("O numero %d eh um quadrado perfeito\n", n);
    }else {
        printf("O numero %d nao eh um quadrado perfeito\n", n);
    }

    return 0;
}
/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/