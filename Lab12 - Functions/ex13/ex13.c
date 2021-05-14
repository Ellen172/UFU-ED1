#include <stdio.h>

struct ponto {
    double x, y;
};

double calc_area(struct ponto a, struct ponto b){
    double dx, dy, area;
    if(a.x>b.y && a.y>b.y){
        dx = a.x-b.x;
        dy = a.y-b.y;
    }else if(a.x>b.y && b.y>a.y){
        dx = a.x-b.x;
        dy = b.y-a.y;
    }else if(b.x>a.x && a.y>b.y){
        dx = b.x-a.x;
        dy = a.y-b.y;
    }else {
        dx = b.x-a.x;
        dy = b.y-a.y;
    }

    area = dx*dy;

    return area;
}

int main(){
    struct ponto a, b;
    double area;
    char temp[50];

    printf("<< Calculo de Area >>\n");
    printf("Digite a coordenada x do ponto 1: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%lf", &a.x);
    printf("Digite a coordenada y do ponto 1: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%lf", &a.y);
    printf("Digite a coordenada x do ponto 2: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%lf", &b.x);
    printf("Digite a coordenada y do ponto 2: ");
    fgets(temp, 20, stdin);
    sscanf(temp, "%lf", &b.y);

    area = calc_area(a,b);

    printf("A area do retangulo definido por (%.2lf, %.2lf) e (%.2lf, %.2lf) eh %.2lf\n", a.x, a.y, b.x, b.y, area);

    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função que calcule a área do retângulo definido por 
dois pontos. 

Cabeçalho: area = calc_area(p1,p2)


-------------------------------------------------------------------------------
Exemplo de Saída:

<< Calculo de Area >>
Digite a coordenada x do ponto 1: 1
Digite a coordenada y do ponto 1: 4
Digite a coordenada x do ponto 2: 4
Digite a coordenada y do ponto 2: 2

A area do retangulo definido por (1.00, 4.00) e (4.00, 2.00) eh 6.00
-------------------------------------------------------------------------------
*/
