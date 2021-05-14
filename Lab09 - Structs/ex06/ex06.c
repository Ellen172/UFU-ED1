#include<stdio.h>
#include<string.h>
#include<ctype.h>
//consTotal printando incorreto, mas valor para somas corretos

struct eletro{
    char nome[20];
    double pot;
    double t;
    double cons;
};

int main() {
    struct eletro cadastro[5];
    double d, consTotal=0;

    for(int i=0; i<5; i++){
        char temp[100];
        printf("Informe os dados do %do eletrodomestico:\n", i+1);
        printf("Nome: ");
        fgets(temp, 20, stdin);
        strcpy(cadastro[i].nome, temp);
        cadastro[i].nome[strcspn(cadastro[i].nome,"\n")] = '\0';
        printf("Potencia: ");
        fgets(temp, 20, stdin);
        sscanf(temp, "%lf", &cadastro[i].pot);
        printf("Tempo ativo por dia: ");
        fgets(temp, 20, stdin);
        sscanf(temp, "%lf", &cadastro[i].t);
    }

    printf("\nInforme um valor de tempo (em dia): ");
    scanf("%d", &d);

    for(int i=0; i<5; i++){
        cadastro[i].cons = cadastro[i].pot * cadastro[i].t * d;
        consTotal += cadastro[i].cons;
    }

    printf("\nConsumo total: %.1lf\n", consTotal); 
    printf("Consumo relativo:\n"); 
    for(int i=0; i<5; i++){
        cadastro[i].cons = (cadastro[i].cons*100)/consTotal;
        printf("%s: %.1lf%%\n", cadastro[i].nome, cadastro[i].cons);
    }

    return 0;
}

/*
6.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa.

    • Crie e leia as informações de 5 eletrodomésticos: o nome (máximo 15 letras), 
      potencia (real,  em kW) e tempo ativo por dia (real, em horas).

    • Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e
      o consumo relativo de cada eletrodoméstico  (consumo/consumo total) nesse período
      de tempo. Apresente este ultimo dado em porcentagem.

-------------------------------------------------------------------------------
Exemplo de saída:
Informe os dados do 1º eletrodomestico: 
Nome: Geladeira
Potencia: 800
Tempo ativo por dia: 24

Informe os dados do 2º eletrodomestico: 
Nome: Ar Condicionado
Potencia: 1500
Tempo ativo por dia: 8

Informe os dados do 3º eletrodomestico: 
Nome: Chuveiro
Potencia: 4500
Tempo ativo por dia: 1

Informe os dados do 4º eletrodomestico: 
Nome: Radio
Potencia: 100
Tempo ativo por dia: 6

Informe os dados do 5º eletrodomestico: 
Nome: Computador
Potencia: 750
Tempo ativo por dia: 18

Informe um valor de tempo (em dia): 30
Consumo total: 1494000 KW
Consumo relativo: 
Geladeira 38.6%
Ar Condicionado 24.1%
Chuveiro 9.0%
Radio 1.2%
Computador 27.1%
-------------------------------------------------------------------------------
*/