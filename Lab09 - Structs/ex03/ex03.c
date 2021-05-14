#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct end{
    char rua[50];
    char num[10];
    char compl[20];
    char cidade[50];
    char estado[5];
    char cep[10];
};

int main() {
    struct end cadastro[3];

    for(int i=0; i<3; i++){
        printf("Rua: ");
        gets(cadastro[i].rua);
        printf("Numero: ");
        gets(cadastro[i].num);
        printf("Complemento: ");
        gets(cadastro[i].compl);
        printf("Cidade: ");
        gets(cadastro[i].cidade);
        printf("Estado: ");
        gets(cadastro[i].estado);
        printf("CEP: ");
        gets(cadastro[i].cep);
        printf("\n");
    }

    printf("Enderecos cadastrados que sao de \"MG\": \n");
    for(int i=0; i<3; i++){
        if(strcmp(cadastro[i].estado,"MG")==0){
            printf("%s, %s. %s. %s-%s, %s.\n", cadastro[i].rua, cadastro[i].num, cadastro[i].compl, cadastro[i].cidade, cadastro[i].estado, cadastro[i].cep);
        }
    }

    return 0;
}

/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/