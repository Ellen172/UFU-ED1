#include<stdio.h>

int main() {
    int val[5] = {2,4,5,8,10};
    unsigned int end;

    printf("<<Alteracao no endereco>>\n\n");

    end = &val[2];

    printf("Digite o valor novo: ");
    scanf("%d", end);

    printf("\nOs valores de val sao: ");
    for(int i=0; i<5; i++){
        if(i==4){
            printf("%d\n", val[i]);
        }else {
            printf("%d, ", val[i]);
        }
    }

    return 0;
}
/*
Crie um programa que contenha a seguinte variável
int val[5] = {2,4,5,8,10};
                  ^
Utilizando a função scanf, altere o valor de 5 para 6. 
Não use o operador & no scanf. Utilize uma variável do tipo inteira*
para guardar o endereço da posição do vetor.

*obs:
unsigned int (para programas em 32bit)
unsigned long int (para programas em 64)

*/