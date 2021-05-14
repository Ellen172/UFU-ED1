#include<stdio.h>

int main() {
    int val[5] = {2,4,5,8,10};
    int *end0, *end1, *end2, *end3, *end4;

    printf("<<Alteracao no endereco>>\n\n");

    end0 = &val[0];
    end1 = &val[1];
    end2 = &val[2];
    end3 = &val[3];
    end4 = &val[4];

    printf("Digite o valor novo: ");
    scanf("%d", end2);

    printf("\nOs valores de val sao: %d, %d, %d, %d, %d\n", *end0, *end1, *end2, *end3, *end4);

    return 0;
}
/* 5)	Os operadores + e – funcionam com ponteiros. Chamamos de aritmética de ponteiros. 
Considere o código abaixo. Complete o código e preencha a tabela abaixo com os endereços de cada printf.

*** modificar o especificador de formato no printf caso seja necessário

+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
| Nome variável               |                   |                   |                 |                   |                   |
| / Endereços                 | Endereço var-2    | Endereço var-1    | Endereço var    | Endereço var+1    | Endereço var+2    |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |                   |                   |                 |                   |                   |
| p_v1                        |                   |                   |                 |                   |                   |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |                   |                   |                 |                   |                   |
| p_v2                        |                   |                   |                 |                   |                   |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |                   |                   |                 |                   |                   |
| p_c                         |                   |                   |                 |                   |                   |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
*/