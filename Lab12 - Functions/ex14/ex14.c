#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct ponto {
    long long int x, y;
};

void multiplica(struct ponto p, int n, struct ponto *r){
    long long int mult_x, mult_y;

    mult_x = p.x * n;
    mult_y = p.y * n;

    r->x = mult_x;
    r->y = mult_y;
}

int main(){
    struct ponto p, *r;
    char temp[50], x[20],y[20];
    int n;

    r = malloc(sizeof(struct ponto));

    printf("Digite o ponto: ");
    fgets(temp, 20, stdin);
    temp[strcspn(temp,"\n")]='\0';

    //copiando o que esta antes da virgula para x
    strcpy(x, temp);
    x[strcspn(x, ",")] = '\0';
    sscanf(x, "%lld", &p.x);

    //copiando depois da virgula para y
    int pos=0;
    for(int i=strcspn(temp, ",")+1; i<=strcspn(temp,"\n"); i++){
        y[pos]=temp[i];
        pos++;
    }
    y[pos]='\0';
    sscanf(y, "%lld", &p.y);  
    
    printf("Digite a constante: ");
    scanf("%d", &n);

    multiplica(p, n, r);

    printf("Resultado: (%lld,%lld) * %d = (%lld,%lld)\n", p.x, p.y, n, r->x, r->y);

    return 0;
}

/*
=> Faça um procedimento que multiplique o valor de um ponto 
por uma constante e altere o valor do ponto. Deve ser usada 
passagem por referência e retorno void.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o ponto: 1,2
Digite a constante: 5
Resultado: (1,2) * 5 = (5,10)
-------------------------------------------------------------------------------
*/