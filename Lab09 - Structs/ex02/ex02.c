#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct data {
    int dia[5];
    char mes[20];
    int ano[10];
};

int main() {
    struct data cadastro[3];
    int dia[3],ano[3];
    char temp[50], mes[20];
    int maior=0;

    for(int i=0; i<3; i++){
        printf("Digite o dia: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%d", cadastro[i].dia);

        printf("Digite o mes: ");
        fgets(temp, 30, stdin);
        strcpy(cadastro[i].mes, temp);
        cadastro[i].mes[strcspn(cadastro[i].mes, "\n")] = '\0';

        printf("Digite o ano: ");
        fgets(temp, 10, stdin);
        sscanf(temp, "%d", cadastro[i].ano);
    }

    printf("\nDatas cadastradas:\n");
    for(int i=0; i<3; i++){
        printf("Dia %d de %s de %d\n", *cadastro[i].dia, cadastro[i].mes, *cadastro[i].ano);
    }

    for(int i=0; i<3; i++){
        if(*cadastro[i].ano>maior){
            maior=*cadastro[i].ano;
        }
    }

    printf("\n%d foi o maior ano cadastrado.", maior);

    return 0;
}
/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/