#include<stdio.h>

int main() {
    char c, nome1[50], nome2[50];
    int b=1;
    printf("<< Compara nomes >> \n\n");

    printf("Digite o primeiro nome e o ultimo nome: ");

    c = getchar();
    int i =0;
    while (c != ' '){
        nome1[i] = c;
        i++;
        c = getchar();
    }

    c = getchar();
    int j =0;
    while (c != '\n'){
        nome2[j] = c;
        
        if(nome1[j] != nome2[j]){
            b=0;
        }
        
        j++;
        c = getchar();
    }

    printf("Nome: ");

    for(int k=0; k<i; k++){
        printf("%c", nome1[k]);
    }

    printf("\nSobrenome: ");

    for(int k=0; k<j; k++){
        printf("%c", nome2[k]);
    }

    printf("\n");

    return 0;

}