#include <stdio.h>
#include <stdlib.h>

void imprime_vet_int(int *vetori, int n){
    for(int i=0; i<n; i++){
        printf("%d ", vetori[i]);
    }
    printf("\n");
}

void imprime_vet_float(float *vetorf, int n){
    for(int i=0; i<n; i++){
         printf("%.2lf ", vetorf[i]);
     }
     printf("\n");
}

void imprime_vet_double(double *vetord, int n){
    for(int i=0; i<n; i++){
        printf("%.2lf ", vetord[i]);
    }
    printf("\n");
}

int main(){
    int n = 5;

    int vetori[5] = {1,2,3,4,5};
    float vetorf[5] = {1.20, 2.30, 3.40, 4.50, 5.50};
    double vetord[5] = {1.20, 2.30, 3.40, 4.50, 5.50};

    int *veti = &vetori;
    float *vetf = &vetorf;
    double *vetd = &vetord;

    printf("Os valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_int(veti,5);

    printf("Os valores inseridos neste vetor de float eh: ");
    imprime_vet_float(vetf,5);

    printf("Os valores inseridos neste vetor de double eh: ");
    imprime_vet_double(vetd,5);

    return 0;
}

/*
=> Crie três funções chamadas imprime_vet_int, 
imprime_vet_double, imprime_vet_float que mostra o conteúdo de 
um vetor de inteiros, double, e float, respectivamente. Use essas 
funções sempre que precisar mostrar um vetor.


Exemplo de Chamada:

    imprime_vet_int(vetori,n);
    imprime_vet_double(vetord,n);
    imprime_vet_float(vetorf,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Os valores inseridos neste vetor de inteiros eh: 1 2 3 4 5 
Os valores inseridos neste vetor de float eh: 1.20 2.30 3.40 4.50 5.50 
Os valores inseridos neste vetor de double eh: 1.20 2.30 3.40 4.50 5.50 
-------------------------------------------------------------------------------
*/