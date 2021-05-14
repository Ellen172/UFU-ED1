#include<stdio.h>

int main() {
    int vet[5];
    double media=0, desvio=0;

    printf("<<Media e desvio-padrao>>\n\n");

    for(int i=0; i<5; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vet[i]);
        media+=vet[i];
    }
    media = media/5;

    for(int i=0; i<5; i++){
        desvio+=pow((vet[i]-media), 2);
    }
    desvio = sqrt(desvio/4);

    printf("\nA media e %.0lf e o desvio-padrao e %.13lf\n", media, desvio);

    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
