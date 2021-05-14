#include<stdio.h>
#include<string.h>
#include<ctype.h>

long long int exponencial(int x, int n){
    long long int r=1;

    if(n<0){
        n = n*(-1);
    }

    for(int i=0; i<n; i++){
        r *= x;
    }

    return r;
}

int main(){
    int x, n;
    long long int resp;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    resp = exponencial(x,n);

    if(n<0){
        printf("O valor de %d elevado a %d eh 1/%lld\n", x, n, resp);
    }else {
        printf("O valor de %d elevado a %d eh %lld\n", x, n, resp);
    }

    return 0;
}

/*
=> Faça uma função para calcular xn. Não utilizar o operador pow (nem ^ - que não existe em C).
No programa principal permita ao usuário informar o valor de x e de n (inteiro). 
Lembre que n pode assumir valor negativo.

Ex: Elevado(2,4) tem como saída 16; 
    

No programa principal, solicite ao usuário o valor de x e o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 2
Digite o valor de n: 4
O valor de 2 elevado a 4 eh 16
-------------------------------------------------------------------------------
*/