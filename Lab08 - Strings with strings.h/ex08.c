#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char nome[50], cpf[50], rg[50], end[50], cidade[50], estado[50], cep[50];

    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu CPF: ");
    gets(cpf);
    printf("Digite seu RG: ");
    gets(rg);
    printf("Digite seu endereco: ");
    gets(end);
    printf("Digite a cidade: ");
    gets(cidade);
    printf("Digite o estado: ");
    gets(estado);
    printf("Digite o CEP: ");
    gets(cep);

    printf("\n\t D E C L A R A C A O \n\n");
    printf("Eu, %s, RG %s, CPF %s, residente da %s, %s-%s, CEP %s venho por meio desta declarar que vou estudar para a prova", nome, rg, cpf, end, cidade, estado, cep);

    return 0;
}