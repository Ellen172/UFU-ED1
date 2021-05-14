#include<stdio.h>

int main() {
    char c, nome1[50], nome2[50];
    int b=1;
    printf("<< Compara nomes >> \n\n");

    printf("Digite o nome 1: ");

    c = getchar();
    int i =0;
    while (c != '\n'){
        nome1[i] = c;
        i++;
        c = getchar();
    }

    printf("Digite o nome 2: ");

    c = getchar();
    i =0;
    while (c != '\n'){
        nome2[i] = c;
        
        if(nome1[i] != nome2[i]){
            b=0;
        }
        
        if((nome1[i]-32) == nome2[i] || (nome1[i]+32) == nome2[i]){
            b=1;
        }
        
        i++;
        c = getchar();
    }

    if(b==0){
        printf("Os nomes digitados sao diferentes\n");
    }else {
        printf("Os nomes digitados sao iguais\n");
    }

    return 0;
}