//incompleto
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int fatorial(int a){
    int x=1;
    while(a>1){
        x*=a;
        a--;
    }
    return x;
}

double neperiano(int n){ 
    double fat, nep=1, x=2;
    while(n>0){
        fat = fatorial(x);
        nep += 1/fat;
        n--;
        x++;
    }
    return nep;
}

int main() {
    int n;
    double nep;

    printf("Digite a quantidade de termos a serem somados: ");
    scanf("%d", &n);

    nep = neperiano(n);

    printf("O valor neperiano e %lf\n", nep);

    return 0;
}

/*
=> Faça uma função para calcular o número neperiano usando uma série (ver na wikipedia). 
A função deve ter como parâmetro o número de termos que serão somados (note que, 
 quanto maior o número, a resposta estará mais próxima do valor e). 
Observe que é preciso calcular o fatorial de vários números – para isso, utilize
a função criada anteriormente. Utilize também o procedimento criado no exercício 2.

Pesquise: https://pt.wikipedia.org/wiki/E_(constante_matemática)



Ex: Neperiano(0) tem como saída 1; 
    Neperiano(1) tem como saída 2;
    Neperiano(5) tem como saída 2.71666666666667;

No programa principal, solicite ao usuário o valor para aproximar
o número neperiano.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de n para aproximar o numero neperiano: 14
O valor do numero neperiano eh: 2.71828182845823
-------------------------------------------------------------------------------
*/