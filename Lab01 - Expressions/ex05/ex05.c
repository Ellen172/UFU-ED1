#include <stdio.h>

int main() {
    printf("<< Aumento Salarial >>\n");
    
    double salario;
    
    printf("Digite o valor do salario R$: ");
    scanf("%lf", &salario);
    
    printf("Apos 25%% de aumento o salario fica em R$ %.2lf. \n", salario+(salario*0.25));
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/