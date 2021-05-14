#include<stdio.h>

int main() {
    printf("<<Probabilidades>>\n\n");

    double vet[4], soma=0, maior=0;

    printf("Digite a quantidade de bolinhas\n");
    printf("Verde: ");
    scanf("%lf", &vet[0]);
    printf("Azul: ");
    scanf("%lf", &vet[1]);
    printf("Amarela: ");
    scanf("%lf", &vet[2]);
    printf("Vermelha: ");
    scanf("%lf", &vet[3]);

    for(int i=0; i<4; i++){
        soma+=vet[i];
    }
    for(int i=0; i<4; i++){
        vet[i]/=soma;
        vet[i]*=100;
    }

    for(int i=0; i<4; i++){
        if(vet[i]>maior){
            maior=vet[i];
        }
    }

    printf("\nProbabilidades\n");
    if(vet[0]==maior){
        printf("Verde: %.1lf%% << Maior probabilidade\n", vet[0]);
    }else{
        printf("Verde: %.1lf%%\n", vet[0]);
    }
    if(vet[1]==maior){
        printf("Azul: %.1lf%% << Maior probabilidade\n", vet[1]);
    }else{
        printf("Azul: %.1lf%%\n", vet[1]);
    }
    if(vet[2]==maior){
        printf("Azul: %.1lf%% << Maior probabilidade\n", vet[2]);
    }else{
        printf("Azul: %.1lf%%\n", vet[2]);
    }
    if(vet[3]==maior){
        printf("Vermelha: %.1lf%% << Maior probabilidade\n", vet[3]);
    }else{
        printf("Vermelha: %.1lf%%\n", vet[3]);
    }

    return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/