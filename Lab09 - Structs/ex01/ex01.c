#include<stdio.h>

struct phone {
    char tel[12];
    char ddd[5];
};

int main() {
    struct phone cadastro[3];
    int ddd[3], tel[3];

    for(int i=0; i<3; i++){
        printf("Insira o DDD: ");
        fgets(cadastro[i].ddd, 50, stdin);
        sscanf(cadastro[i].ddd, "%d", &ddd[i]);
        printf("Insira o telefone: ");
        fgets(cadastro[i].tel, 50, stdin);
        sscanf(cadastro[i].tel, "%d", &tel[i]);
    }

    printf("\nTelefones cadastrados: \n");

    for(int i=0; i<3; i++){
        printf("%d %d\n", ddd[i], tel[i]);
    }

    return 0;
}
/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/